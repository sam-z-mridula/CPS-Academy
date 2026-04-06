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

int cnt = 0;

void Merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    int L[n1+1], R[n2+1];
    for(int i = 0; i < n1; i++) L[i] = A[left + i];
    for(int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = INT_MAX;
 
    int i = 0, j = 0;
    for(int k = left; k < right; k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i = i + 1;
            cnt++;
        }
        else
        {
            A[k] = R[j];
            j = j + 1;
            cnt++;
        }
    }
}

void Merge_Sort(int A[], int left, int right)
{
    if(left+1 < right)
    {
        int mid = (left + right) / 2;
        Merge_Sort(A, left, mid);
        Merge_Sort(A, mid, right);
        Merge(A, left, mid, right);
    }
}

void solve()
{
    int n; cin >> n;
    int S[n];
    for(int i = 0; i < n; i++) cin >> S[i];
    
    Merge_Sort(S, 0, n);

    // print answer:
    for(int i = 0; i < n; i++) cout << S[i] << " \n"[i == n-1];
    cout << cnt;
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