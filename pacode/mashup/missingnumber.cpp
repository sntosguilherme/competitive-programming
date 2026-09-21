#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    
    cin >> n;

    vector<int> arr(n);

    for(long long i =0; i < n-1;i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(long long i=0; i < n;i++){

        // se esta na ultima posicao
        if(i == n-1){
            n = arr[i]+1;
            break;
        }

        if(arr[i+1] - arr[i] >= 2){
            n = arr[i]+1;
            break;
        }
    }

    cout << n << "\n";
    return 0;
}