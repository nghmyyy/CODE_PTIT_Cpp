#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin  >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1001];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int max = -1;
        
        for(int i = 1; i < n - 1; i++){
            for(int j = 0; j < i; j++){
                if(a[i] - a[j] > max && a[i] > a[j]){
                    max = a[i] - a[j];
                }

            }

        }
        if(max > -1){
            cout << max << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}