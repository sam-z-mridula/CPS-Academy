/* IN THE NAME OF ALMIGHTY ALLAH
____  ___.__ .__                          _________ .__               .___           
\   \/  /|__||  | ___  __  ____ _______   \_   _   \|  |  _____     __| _/ ____      
 \     / |  ||  | \  \/ /_/ __ \\_  __ \   |  | ) _/|  |  \__  \   / __ |_/ __ \     
 /     \ |  ||  |__\   / \  ___/ |  | \/   |  |_)  \|  |__ / __ \_/ /_/ |\  ___/     
/___/\  \|__||____/ \_/   \___  >|__|      |_____  /|____/(____  /\____ | \___  >    
      \_/                     \/                 \/            \/      \/     \/     
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define nl '\n'
#define cy cout << "YES"
#define cn cout << "NO"

const int y = 1e5 + 5;
vi v(y);
vll dp(y, -1);

/*
ll minCost(int i, int n)
{
    // i = বর্তমানে যেই stone-এ আছি 
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];

    if(i != n-1)
    {
        ll costA = abs(v[i] - v[i+1]);          // ith(current) stone থেকে (i+1)th stone-এ যাওয়ার cost
        ll costB = abs(v[i] - v[i+2]);          //                         (i+2)th stone-এ যাওয়ার cost

        ll totalA = costA + minCost(i+1, n);        // total cost, যদি i+1 stone-এ যাই 
        ll totalB = costB + minCost(i+2, n);        //             যদি i+2 stone-এ যাই

        dp[i] = min(totalA, totalB);
        return dp[i];
    }
    else return abs(v[i] - v[i+1]);
} */

void solve()
{
    int n; cin >> n;
    for (auto &x : v) cin >> x;
    
    // cout << minCost(0, n-1);

    dp[0] = 0;                      // বর্তমানে ১ম stone-এ আছি, so cost = 0
    dp[1] = abs(v[0] - v[1]);       // ১ম stone থেকে ২য় stone-এ যাওয়ার cost

    for(int i = 2; i < n; i++)
    {
        ll costA = abs(v[i] - v[i-1]) + dp[i-1];    // i-1 থেকে আসার cost
        ll costB = abs(v[i] - v[i-2]) + dp[i-2];    // i-2 থেকে আসার cost
        dp[i] = min(costA, costB);
    }

    cout << dp[n-1];
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
    
    int T = 1;
    // cin >> T;
    while (T--) { solve(); cout << nl; }
}
/*
-------------------------------------
 Coded by : Sameeha Zahan Mridula
-------------------------------------
*/