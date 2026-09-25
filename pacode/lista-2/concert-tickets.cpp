#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    int n, m; cin >> n; cin >> m;

    multiset<int> tickets;
    // essa fila é desnecessária visto que os clientes são processados em ordem de entrada
    queue<int> clients;
    
    for(int i=0;i<n;i++){
        int k; cin >> k;
        tickets.insert(k);
    }
    
    for(int i=0;i<m;i++){
        int k; cin >>k;
        clients.push(k);
    }


    for(int i=0;i<m;i++){
        int atual = clients.front();
        clients.pop();

        auto price = tickets.upper_bound(atual);

        if(price == tickets.begin()){
            cout << -1 << endl;
        }
        else{
            price--;
            cout << *price << endl;
            tickets.erase(price);
        }
    }



    
}