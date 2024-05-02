#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int i = 0;
        if(n%2 != 0){
            while( i <= n/2){
                cout << a[n - 1 -i] << " ";
                if(i != n - 1 - i){
                    cout << a[i] <<" ";
                }
                i++;
            }
        }
        else{
            while( i < n/2){
                cout << a[n - 1 -i] << " ";
                if(i != n - 1 - i){
                    cout << a[i] <<" ";
                }
                i++;
            }
        } 
        cout << endl;
    }
    
}