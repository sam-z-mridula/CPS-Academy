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
    vector<pair<double, double> > vp(n);
    for(int i = 0; i < n; i++)
        cin >> vp[i].first >> vp[i].second;

    double ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        double x1 = vp[i].first, y1 = vp[i].second;
        for(int j = i + 1; j < n; j++)
        {
            double x2 = vp[j].first, y2 = vp[j].second;
            double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
            ans = max(ans, d);
        }
    }
    cout << fixed << setprecision(10) << ans;
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