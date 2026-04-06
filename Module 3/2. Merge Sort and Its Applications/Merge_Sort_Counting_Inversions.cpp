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
ll inv = 0;

void merge(int l, int r)
{
    int mid = (l+r)/2;
    vi L, R;
    for(int i = l; i <= mid; i++) L.push_back(v[i]);
    for(int i = mid+1; i <= r; i++) R.push_back(v[i]);

    int idx = l;    // current index (l to r পর্যন্ত যাবে)
    int i = 0, j = 0;

    while(i < L.size() && j < R.size())
    {
        if(L[i] <= R[j]) v[idx] = L[i++], idx++;
        else v[idx] = R[j++], idx++, inv += L.size() - i;
    }

    while(i < L.size()) v[idx] = L[i], idx++, i++;
    while(j < R.size()) v[idx] = R[j], idx++, j++;
}

void divide_n_conquer(int left, int right)
{
    if(left == right) return;

    int mid = (left + right) / 2;

    // divide all [l to mid] and [mid+1 to r]s
    divide_n_conquer(left, mid);
    divide_n_conquer(mid+1, right);

    // now merge
    merge(left, right);
}

void solve()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    
    inv = 0;
    divide_n_conquer(0, n-1);

    // print answer:
    cout << inv;
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
-------------------------------------
*/