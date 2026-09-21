#include <bits/stdc++.h>

using namespace std;
#define endl "\n";
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){_

    int n; cin >> n;
    vector<int> v(n);
        
    for(int i = 0; i < n; i++) { cin >> v[i]; }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++) { cout << v[i] << " \n"[ i == n-1];}
    
    return 0;
}