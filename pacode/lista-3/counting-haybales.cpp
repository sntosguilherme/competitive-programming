#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int main(){ _

    ifstream fin("haybales.in");
    ofstream fout("haybales.out");

    int n, q;
    fin >> n >> q;

    vector<int> hay(n);

    for(int i = 0; i < n; i++){
        int k;
        fin >> k;
        hay[i] = k;
    }

    sort(hay.begin(), hay.end());

    while(q--){
        int a, b;
        fin >> a >> b;

        // lower retorna primeiro >= a
        int lower = lower_bound(hay.begin(), hay.end(), a) - hay.begin();

        // upper retorna primeiro > b
        int upper = upper_bound(hay.begin(), hay.end(), b) - hay.begin();

        int interval = upper - lower;

        fout << interval << endl;
    }

    return 0;
}