#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_

    int n; cin >> n;
    vector<int> v(n);
    int remocoes = 0;

    for (int i=0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    int i = 0;
    while(i < n){
        int valor = v[i];
        int count = 0;

        while(v[i] == valor){
            count++; i++;
        }

        if(count == valor) continue;

        if(count < valor){
            remocoes += count;
            continue;
        }
        if(count > valor){
            remocoes += count-valor;
        } 
    }

    cout << remocoes << endl;

    return 0;
}