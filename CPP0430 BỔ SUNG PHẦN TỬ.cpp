#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100001];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        set<int> se;
        for(int i = 0; i < n; i++){
            se.insert(a[i]);
        }
        int ssh = (a[n-1] - a[0]) + 1;
        int dem = ssh - se.size();
        cout << dem << endl;
    }
}