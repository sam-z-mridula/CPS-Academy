/* Question:
Expected value খোঁজো, না পেলে expected value এর পরের বড় সংখ্যার index print করো */

/* IN THE NAME OF ALMIGHTY ALLAH */

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
    int n, val; cin >> n >> val;
    vi v(n);
    for (auto &u : v) cin >> u;
    
    // array must be sorted
    int high = n-1, low = 0;
    int ans;
    while(high >= low)
    {
        int mid = (high + low) / 2;     // mid = lo + (hi-lo)/2
        if(v[mid] == val)
        {
            ans = mid;
            break;
        }
        else if(v[mid] < val) low = mid + 1;
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    
    if(v[ans] == val) cout << ans;
    else cout << ans << ' ' << v[ans];
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