#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    string s; cin >> s;
    vector<char> v;

    for(int i = 0; i < s.length(); i++){
        v.push_back(s[i]);

            int n = v.size();
            if(n >= 3 && v[n-3] == 'A' && v[n-2] == 'B' && v[n-1] == 'C'){
                v.pop_back();
                v.pop_back();
                v.pop_back();
            }
    }

    for ( int i = 0; i < v.size(); i++) cout << v[i];
    cout << endl;

    return 0;
}