#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_

    int n, q; cin >> n >> q;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];

    while(q--){
        int x; cin >> x;

        int it = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        if(it == n || arr[it] != x) cout << -1 << endl;
        else cout << it << endl;
    }
}