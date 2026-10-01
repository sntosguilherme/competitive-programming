#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main(){
    int n,m; cin >> n >> m;
    vector<int> cities(n);
    vector<int> towers(m);

    int ans = 0;
    
    for(int i=0;i<n;i++){
        int k; cin >> k;
        cities[i] = k;
    }
    for(int i=0;i<m;i++){
        int k; cin >> k;
        towers[i] = k;
    }

    // para cada cidade procurar o valor de torre mais proximo.
    for (int i=0;i<n; i++)
    {

        // it aponta para a primeira torre >= cidade
        auto it = lower_bound(towers.begin(), towers.end(), cities[i]);
         
        int choice = 0;

        // edge cases
        if(it == towers.begin()) choice = abs(cities[i] - *it);
        else if(it == towers.end()) choice = abs(cities[i] - *(it-1));

        // pega o menor entre os vizinhos
        else{
            int l = abs(cities[i] - *(it-1));
            int r = abs(cities[i] - *it);
            choice = min(r,l);
        }
        
        // a ans vira o maximo entre a escolha e ela mesma; a maior distancia entre as menores distancias individuais
        ans = max(ans, choice);
    }

    cout << ans << endl;
}