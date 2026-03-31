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

    /* ---------- Also Correct ---------------
    if(n == 0) cout << 0 << ' ' << 0 << ' ' << 0;
    else if(n == 1) cout << 0 << ' ' << 0 << ' ' << 1;
    else if(n == 2) cout << 0 << ' ' << 1 << ' ' << 1;
    else
    {
        int f1 = 1;
        int f2 = 2;
        int f3 = f1 + f2;

        while(f3 != n)
        {
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2;
        }

        cout << 0 << ' ' << f1 << ' ' << f2;
    } */

    // ---------- Easiest Solution -------------
    cout << 0 << ' ' << 0 << ' ' << n;
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