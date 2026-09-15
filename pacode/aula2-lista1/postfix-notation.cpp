#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){_

    string linha;
    getline(cin, linha);
    stringstream ss(linha);

    string s;
    stack<double> pilha;

    while(ss >> s){
        if(s == "+" || s == "-" || s == "*" || s == "/" || s == "%" || s == "^") {

            double b = pilha.top(); pilha.pop();
            double a = pilha.top(); pilha.pop();

            if(s == "+") pilha.push(a + b);
            else if(s == "-") pilha.push(a - b);
            else if(s == "*") pilha.push(a * b);
            else if(s == "/") pilha.push(a / b);
            else if(s == "%") pilha.push(fmod(a,b));
            else if(s == "^") pilha.push(pow(a, b));
        }
        else{
            pilha.push(stod(s));
        }
    }

    cout << fixed << setprecision(1)<< pilha.top() << endl;

    return 0;
}