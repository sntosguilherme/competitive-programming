#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
    _

    int n, m;
    long k;

    cin >> n;
    cin >> m;
    cin >> k;

    int count;
    count = 0;
    
    long desired[n];
    long apartments[m];

    for(int i = 0; i < n; i++)
    {
        cin >> desired[i];
    }

    for(int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }

    for( int apartment : apartments )
    {
        for ( int size : desired )
        {
            if (apartment > (size-k) && apartment < (size+k))
            {
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}