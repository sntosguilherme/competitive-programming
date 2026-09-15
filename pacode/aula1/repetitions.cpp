#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    string s; cin >> s;
    int maior = 0;
    int current = 0;
    char c = s[0];

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == c){
            current++;
        }
        else{
            if(current > maior){maior = current;}

            c = s[i];
            current = 1;
        }
    }

    if(current > maior){maior = current;}

    cout << maior << endl;
}