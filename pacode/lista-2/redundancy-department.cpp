#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    
    map<int,int> value_freq;
    vector<int> order;
    int n;
    while(cin >> n){
        if(value_freq[n] == 0) order.push_back(n);
        value_freq[n]++;
    }
    
    for(int i=0; i < order.size(); i++){
        cout << order[i] << " " << value_freq[order[i]] << endl;
    }
    
    return 0;
}