#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10000001];
        for(int i = 0; i < n ; i ++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            if(a[i] != i){
                cout << i << endl;
                break;
            }
        }
    }
    
}