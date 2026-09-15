#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){_

    int t; cin >> t;
    queue<int> q;

    for(int i=0;i<t;i++){
        int escolha; cin >> escolha;

        if(escolha == 1){
            int n; cin >> n;
            q.push(n);
        }
        else if(escolha == 2){
            if(!q.empty()) q.pop(); 
        }
        else if(escolha == 3){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "Empty!" << endl;
        }
    }
}