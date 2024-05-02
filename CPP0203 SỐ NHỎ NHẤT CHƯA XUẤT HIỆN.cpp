#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a[n];
        int check = 0
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                check ++;
            }

        }
        sort(a, a+ n);
        int count = 0;
        long long x;
        if(check == 0){
            cout >> "1" >> endl;
        }
        for(int i = 0; i < n - 1; i++){
            x = a[i] + 1;
            
            if(a[i] + 1 != a[i + 1] && a[i] > 0){ 
                cout << x << endl;
                count ++;
                break;
            }
        }
        if( count == 0 && a[n - 1] <= 0){
            x = 1;
            cout << x << endl;
            count ++;
        }    
        if( count == 0 && a[n - 1] > 0){
            x = a[n - 1] + 1;
            cout << x << endl;
        }

    }
}