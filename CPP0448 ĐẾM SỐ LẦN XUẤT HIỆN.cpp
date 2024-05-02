#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        int a[10001];
        cin >> n >> k;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        } 
        int count = 0;
        for(auto it : mp){
            if(it.first == k){
                count ++;
                cout << it.second << endl;
            }
        }
        if(count == 0){
            cout <<"-1"<<endl;
        }
    }
    

}