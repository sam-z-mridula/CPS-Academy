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

// Question:
// array = 5, 6, 7, 9, 12, 1, 3, 4
// এই sorted array তে ১ সেট element (sub-array) rotate করা হয়েছে, সেই set-এ কয়টা element ছিল?

bool isOK(int idx, vi &v)
{
    // target: যেহেতু array sorted, যেই set rotate করা হয়েছে তার ১ম val বর্তমান array এর ১ম val থেকে অবশ্যই ছোট হবে, কারণ সেটা পুরো array-এরই সবচেয়ে ছোট element. 
    // So, current val 'v[idx]' যদি v[0] থেকে বড় হয়, তারমানে আরও right side এ যেতে হবে, কারণ এখন normal increasing অংশের মধ্যে আছে
    if(v[idx] > v[0]) return 1;
    return 0;
}

void solve()
{
    int n; cin >> n;
    vi v(n);
    for (auto &u : v) cin >> u;
    
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l+r)/2;
        if(isOK(mid, v)) l = mid + 1;       // go right to find v[idx] < v[0]
        else r = mid;
    }

    cout << n - l;
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