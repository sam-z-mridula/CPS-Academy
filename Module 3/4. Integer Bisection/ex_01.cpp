/* IN THE NAME OF ALMIGHTY ALLAH
____  ___.__ .__                          _________ .__               .___           
\   \/  /|__||  | ___  __  ____ _______   \_   _   \|  |  _____     __| _/ ____      
 \     / |  ||  | \  \/ /_/ __ \\_  __ \   |  | ) _/|  |  \__  \   / __ |_/ __ \     
 /     \ |  ||  |__\   / \  ___/ |  | \/   |  |_)  \|  |__ / __ \_/ /_/ |\  ___/     
/___/\  \|__||____/ \_/   \___  >|__|      |_____  /|____/(____  /\____ | \___  >    
      \_/                     \/                 \/            \/      \/     \/     
*/

// Question:
// integer bisection দিয়ে first and last occurance বের করো

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
    // right side = true
    if(v[i] >= val) return 1;
    return 0;
}

// Use it as Black Box
void solve()
{
    int n = 10, val = 7;
    vi v = {1, 3, 4, 4, 6, 7, 7, 7, 9, 12};
    
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if(isOK(mid, val, v))
        {
            r = mid; // right side is true
        }
        else
        {
            l = mid + 1; // right side is true
        }
    }
    
    cout << "First occ: " << l << nl; 
    //      l = first true (if right side is true), l-1 = last false
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