#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_


    stack<int> pilha;
    while(1){

        string s;cin >> s;

        if(s == "exit") {cout << "bye" << endl; break;}

        else if(s == "push"){
            int n; cin >> n;
            pilha.push(n);
            cout<< "ok" << endl;
        }

        else if(s == "pop"){cout << pilha.top() << endl; pilha.pop();}
        else if(s == "back"){cout << pilha.top() << endl;}
        else if(s == "size"){cout << pilha.size() <<endl;}
        
        else if(s == "clear"){
            while(!pilha.empty()){
                pilha.pop();
            }

            cout<< "ok" << endl;
        }
    }

    return 0;
}