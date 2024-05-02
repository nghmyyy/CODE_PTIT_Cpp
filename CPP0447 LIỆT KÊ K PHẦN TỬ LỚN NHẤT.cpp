#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k; cin >> k;
        int a[10001];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = n - 1; i >= (n - k); i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
