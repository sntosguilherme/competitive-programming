#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_

    int n; cin >> n;
    map<int,int> size_freq;
    int ans = 0;

    for(int i=0;i<n;i++){
        int k; cin >> k;
        
        size_freq[k]++;
        ans = max(size_freq[k], ans);
    }

    cout << ans << endl;
}