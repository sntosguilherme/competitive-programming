#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
 
    int n; cin >> n;
    int m; cin >> m;

    int count = 0;

    queue<pair<int,int>> fila;

    for(int i=0;i<n;i++){
        int k; cin >> k;
        fila.push({k,i+1});
    }

    while(fila.size() > 1){
        int kid = fila.front().first - m; 
        int id = fila.front().second;
        fila.pop();

        if (kid > 0){
            fila.push({kid,id});
        }
    }

    cout << fila.front().second << endl;

    return 0;
}