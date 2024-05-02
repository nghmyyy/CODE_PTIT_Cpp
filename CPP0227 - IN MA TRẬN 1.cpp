#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[50][50];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        int x;
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
        while(h1 <= h2 ){
            for(int j = c1; j <= c2; j++){
                x = a[h1][j];
                cout << a[h1][j] << " ";
            }
            h1++;
            if(h1 <= h2){
                for(int j = c2; j >= c1; j--){
                    x = a[h1][j];
                    cout << a[h1][j] << " ";
                }
                h1++;
            }
            if(h1 > h2){
                cout << endl;
            }
        }
    }
    
}
