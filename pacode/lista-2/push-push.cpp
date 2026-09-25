#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_

    int n; cin >> n;
    deque<int> f;
    
    for(int i=0; i<n; i++){
        int t; cin >> t;

        if (i % 2 == 0){
            f.push_back(t);
        }
        else{
            f.push_front(t);
        }
    }

    if(f.size() % 2 == 1){
        while(!f.empty()){
            cout << f.back() << ((f.size() == 1) ? "" : " ");
            f.pop_back();
        }
    }
    else{
        while(!f.empty()){
            cout << f.front() << ((f.size() == 1) ? "" : " ");
            f.pop_front();
        }
    }
    cout << endl;
}