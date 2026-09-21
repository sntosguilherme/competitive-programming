#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    int n; cin >> n;

    set<string> uniques;

    while(n--){
        string s; cin >> s;
        uniques.insert(s);
    }

    cout << uniques.size() << endl;
}