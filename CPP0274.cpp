#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int a[100001];
        cin >> n;
        for(int i; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        int dem = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n;j++){
                if(a[i] == a[j]){
                    count ++;
                }
            }
        }
        cout << count << endl;
    }
}