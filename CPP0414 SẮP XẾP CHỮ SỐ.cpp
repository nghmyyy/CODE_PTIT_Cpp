#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[10000001];
        set<int> se;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0;i < n; i++){
            while (a[i] > 0){
                int b = a[i] % 10;
                se.insert(b);
                a[i] /= 10;
            }           
        }
        for(int x : se){
            cout << x << " ";
        }
        cout << endl;
    }
    
}