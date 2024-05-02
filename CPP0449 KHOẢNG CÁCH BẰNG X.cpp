#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count==0;
        sort(a, a+n);
        for(int i = n-1; i >= 1; i--){
            for(int j = i - 1; j >= 0; j--){
                if(a[i] - a[j] == x){
                    cout << "1";
                    count++;
                    break;
                }
            }
        }
        if(count==0){
            cout << "-1";
        }
        cout << endl;
    }
}