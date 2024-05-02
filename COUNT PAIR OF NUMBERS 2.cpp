#include <bits/stdc++.h>
using namespace std;
#define st string
#define str struct
#define db double
#define ll long long
#define ldb long double
 
int main(){
    int T;cin>>T;
    while(T--){
        ll n,k; cin>>n>>k;
        ll s[n];
        ll e=0,i,j;
        for(i=0;i<n;i++) cin>>s[i];
 
        sort(s,s+n);
 
        for(i=n-1;i>0;i--){
            if((lower_bound(s,s+n,k-s[i])-s)<i){
            e+=i-(lower_bound(s,s+n,k-s[i])-s);
            }
            if(s[i]+s[i-1]<k) break;
        }
        cout<<e<<endl;
    }
}