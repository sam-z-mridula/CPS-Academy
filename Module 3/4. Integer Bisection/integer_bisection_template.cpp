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

bool isOK(int i, int val, vi &v)
{
    if(v[i] >= val) return 0;
    return 1;
}

void solve()
{
    int n, val; cin >> n >> val;
    vi v(n);
    for (auto &u : v) cin >> u;
    
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if(isOK(mid, val, v))
            l = mid + 1;
        else r = mid;
    }
    
    cout << l << nl;
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
 Solved by : Sameeha Zahan Mridula
-------------------------------------
*/