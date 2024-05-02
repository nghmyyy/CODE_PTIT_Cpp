#include<bits/stdc++.h>
using namespace std;
int bcnn(long long a, long long b, long long c){
    long long x = a*b/ __gcd(a,b);
    long long x1 = x*c/ __gcd(x,c);
    return x1;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long x, y, z,n;
        cin >> x >> y >> z >> n;
        long long start = 1;
        long long end = 1;
        long long count = 0;
        long long bc = bcnn(x, y, z);
        for(int i = 0; i < n-1;i++) start*=10;
        for(int i = 0; i < n;i++) end*=10;
        if(bc > end){
            cout << "-1" << endl;
        }
        else{
            long long n = start/bc;
            if(start % bc != 0) n+=1;
            bc*=n;
            cout << bc << endl;
        }
    }
}
