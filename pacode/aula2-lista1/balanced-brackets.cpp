#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        stack<char> pilha;
        bool flag = false;

        for(int j = 0; j < s.length(); j++){
            if(s[j] == '(' || s[j] == '[' || s[j] == '{'){
                pilha.push(s[j]);
            }

            else{
                if (pilha.empty()) {
                    flag = true;
                    break;
                }

                char c = pilha.top();

                if(c == '(' && s[j] == ')' || c == '[' && s[j] == ']' || c == '{' && s[j] == '}' ){
                    pilha.pop();
                }
                else{
                    flag=true;
                    break;
                }
            }
        }

        if(pilha.empty() && !flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}