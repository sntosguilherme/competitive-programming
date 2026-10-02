/*
    PROBLEMA APARTMENTS, CSES 1084.

    JOAO GUILHERME, 01/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){ _

    int n,m,k; cin >> n >> m >> k;

    vector<int> desired(n);
    vector<int> apartments(m);

    for(int i=0;i<n;i++) cin >> desired[i];
    for(int j=0;j<m;j++) cin >> apartments[j];

    sort(desired.begin(), desired.end());
    sort(apartments.begin(), apartments.end());

    int ans = 0;
    int i = 0; 
    int j = 0;
    
    while(i < n && j < m){
        int dif = desired[i] - apartments[j];

        // se a diferença é menor ou igual ao k o apartamento é atribuido ao cliente;
        if(abs(dif) <= k ){
            ans++;
            i++;
            j++;
        }

        // se a diferença é maior e é positiva o desejado é maior que o apartamento, 
        // logo, nenhum desejado tera dif < k devido a ordenação
        else if(dif > 0){
            j++;
        }

        // se a diferença for negativa o apartamento é muito grande para o desejado então passa pro próximo desejado
        else{
            i++;
        }
    }

    cout << ans << endl;
}