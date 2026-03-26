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

void solve()
{
    int n; cin >> n;
    vi v(n);
    for (auto &x : v) cin >> x;
    
    int goal = n + 1;
    for(auto x : v) cout << goal - x << " ";
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while (t--) { solve(); cout << nl; }
}
/*
-------------------------------------
 Coded by : Sameeha Zahan Mridula
-------------------------------------
*/