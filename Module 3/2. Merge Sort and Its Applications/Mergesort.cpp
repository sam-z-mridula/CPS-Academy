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

vi v;

void merge(int l, int r)
{
    int mid = (l+r)/2;
    // we know, [l to mid] and [mid+1 to r] both are sorted
    vi left, right;
    for(int i = l; i <= mid; i++) left.push_back(v[i]);
    for(int i = mid+1; i <= r; i++) right.push_back(v[i]);

    int idx = l;    // current index (l to r পর্যন্ত যাবে)
    int i = 0, j = 0;

    while(i < left.size() && j < right.size())
    {
        if(left[i] < right[j]) v[idx] = left[i], idx++, i++;
        else v[idx] = right[j], idx++, j++;
    }

    while(i < left.size()) v[idx] = left[i], idx++, i++;
    while(j < right.size()) v[idx] = right[j], idx++, j++;
}

void divide_n_conquer(int l, int r)
{
    if(l == r) return;

    int mid = (l+r) / 2;

    // divide all [l to mid] and [mid+1 to r]s
    divide_n_conquer(l, mid);
    divide_n_conquer(mid+1, r);

    // now merge
    merge(l, r);
}

void solve()
{
    int u;
    while(cin >> u) v.push_back(u);
    int n = v.size();
    
    divide_n_conquer(0, n-1);

    // print answer:
    for(int i = 0; i < n; i++) cout << v[i] << ' ';
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