#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p;
    cin >> n >> m  >>p;
    int a[51][51], b[51][51];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    int c[51][51];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            int sum = 0;
            for(int k = 0; k < m; k++){
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}