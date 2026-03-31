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
    if(n == 1) { cout << 1; return; }

    int evn = 2;
    int odd = (n % 2 == 1) ? n : n-1;
    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(i % 2)
            {
                cout << odd << ' ';
                odd -= 2;
            }
            else
            {
                cout << evn << ' ';
                evn += 2;
            }
        }
    }
    else
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(i % 2)
            {
                cout << odd << ' ';
                odd -= 2;
            }
            else
            {
                cout << evn << ' ';
                evn += 2;
            }
        }
        cout << odd;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
    
    int T = 1;
    cin >> T;
    while (T--) { solve(); cout << nl; }
}
/*
-------------------------------------
 Coded by : Sameeha Zahan Mridula
-----------}--------------------------
*/