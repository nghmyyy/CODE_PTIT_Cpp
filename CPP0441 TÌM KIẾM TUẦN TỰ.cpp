#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[1000001];
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        int count = 0;
        for(int i = 0; i < n;i++){
            if(a[i] == x){
                cout << i + 1 << endl;
                count++;
                break;
            }
        }
        if(count == 0){
            cout << "-1" << endl;
        }
    }
}