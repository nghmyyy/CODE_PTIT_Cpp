#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k; cin >> k;
        int a[100][100];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        vector<int> v;
        sort(a, a + (n*n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                v.push_back(a[i][j]);
            }
        }
        cout << v[k-1] << endl;

    }
}