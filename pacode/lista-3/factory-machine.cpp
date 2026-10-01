#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int n, p; 
vector<int> t; 

bool ok(long long tempo){
    long long done = 0;
    
    for(int i=0; i<n; i++){
        done += tempo/t[i];
        
        if(done >= p) return true;
    }
    
    return false;
    
}

int main(){ _
    
    cin >> n >> p;
    for(int i=0;i<n;i++) {
        int k; cin >> k; 
        t.push_back(k); 
    }

    long long l, r; l = 0; r = 1e18;

    while(l<r){
        long long m = l + (r-l)/2;

        if(ok(m)) r = m;
        else l = m+1;
    }

    cout << l << endl;
}