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
vll dp(y, LLONG_MAX);

void solve()
{
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> v[i];
    
    dp[1] = 0;
    for(int i = 2; i <= n; i++)
        for(int j = i-1; j >= i-k; j--)
        {
            if(j <= 0) break;
            ll cost = abs(v[i] - v[j]) + dp[j];
            dp[i] = min(dp[i], cost);
        }

    cout << dp[n];
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