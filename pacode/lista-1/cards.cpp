#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){_
    int n;cin >> n;
    string s; cin >> s;

    int zerocount=0;
    int onecount=0;

    for(int i=0;i<n;i++){
        if(s[i]=='z')zerocount++;
        if(s[i]=='n')onecount++;
    }
    for(int i=0;i<onecount;i++) cout << '1' << ' ';
    for(int i=0;i<zerocount;i++) cout << '0' << (i < zerocount-1 ? " " : "");
    cout << endl;
}