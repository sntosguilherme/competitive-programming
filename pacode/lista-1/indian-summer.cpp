#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_

    int n; cin >> n;
    set<pair<string,string>> uniquepairs;
    
    for(int i = 0; i < n; i++){
        string species; cin >> species;
        string color; cin >> color;

        pair<string,string> p;

        p = make_pair(species, color);
        uniquepairs.insert(p);
    }

    cout << uniquepairs.size() << endl;

    return 0;
}