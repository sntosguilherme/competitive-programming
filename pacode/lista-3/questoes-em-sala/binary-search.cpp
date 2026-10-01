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

        int left = 0, right = n-1;

        while(left < right){
            int mid = (left+right)/2;

            if(arr[mid] >= x) right = mid;
            else if(arr[mid] < x) left = mid +1;
        }

        // left = right
        if(arr[left] == x) cout << left << endl;
        else cout << -1 << endl;

    }
}