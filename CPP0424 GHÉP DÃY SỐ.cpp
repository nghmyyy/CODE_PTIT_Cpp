#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[1001][11];
        int m = n*k;
        int i1 = 0;
        int b[11011];
        for (int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                cin >> a[i][j];
                b[i1++] = a[i][j]; 
            }
        }
        sort(b, b + n*k);
        for(int i1 = 0; i1 < n*k; i1++){
            cout << b[i1] << " ";
        }
        cout << endl;
        
    }
    
}