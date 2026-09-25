#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){_
    int t; cin >> t;
    deque<int> f;

    for(int i=0;i<t;i++){
        int n; cin >> n;

        if(n == 0){
            int d; int x; cin >> d; cin >> x;

            if(d){
                f.push_back(x);
            }   
            else{
                f.push_front(x);
            }   
        }
        else if(n == 1){
            int p; cin >> p;
            if(f.empty()) continue;

            int ap = f.at(p);
            cout << ap << endl; 
        }
        else if(n == 2){
            int d; cin >> d;
            if(f.empty()) continue;

            if(d){
                f.pop_back();
            }   
            else{
                f.pop_front();
            }   
        }
    }
}