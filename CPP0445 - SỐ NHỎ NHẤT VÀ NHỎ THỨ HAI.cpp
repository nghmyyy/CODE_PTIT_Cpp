#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        set <int> se;
        unsigned int a[10000001];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n;i++){
            se.insert(a[i]);
        }
        if(se.size() < 2){
            cout << "-1";
        }
        else{
            int count = 0;
            for(int x : se){
                cout << x << " ";
                count ++;
                if(count >= 2){
                    break;
                }
            }
        }
        cout << endl;
    }
    
}