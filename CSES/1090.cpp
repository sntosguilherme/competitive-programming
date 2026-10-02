/*
    PROBLEMA FERRIS WHEEL, CSES 1090.

    JOAO GUILHERME, 01/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){ _
    int n, x; cin >> n >> x;

    vector<int> w(n);

    for(int i=0;i<n;i++) cin >> w[i];

    sort(w.begin(), w.end());

    int ans=0;
    int i=0;
    int j=n-1;

    while(i<=j){
        ans++;

        // se as duas crianças cabem comporta as duas e se nao sao a mesma criança
        if(i != j && w[i] + w[j] <= x){
            i++;
            j--;
        }
        // caso contrario escolhe só a mais pesada
        else j--;
    }

    cout << ans << endl;
}