#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){ _

    int n, m; cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++){
        int k = upper_bound(a.begin(), a.end(), b[i]) - a.begin();

        cout << k << (i != m-1 ? " " : "\n");
    }
}