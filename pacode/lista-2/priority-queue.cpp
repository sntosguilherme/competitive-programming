#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    
    priority_queue<int> pq;

    while(true){

        string s; cin >> s;

        if(s == "end") break;

        if (s == "insert"){
            int n; cin >> n;
            pq.push(n);
        }
        if(s == "extract"){
            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}