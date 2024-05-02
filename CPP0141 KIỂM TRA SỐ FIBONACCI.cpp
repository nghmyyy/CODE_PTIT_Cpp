#include<bits/stdc++.h>
using namespace std;
int check_fibo(long long n){
        if(n == 0) return 1;
        long long fn = 0, f1 = 0, f2 = 1;
        while(n > fn){
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
            if(n == fn) return 1;
            if(n < fn) return 0;

        }  
        return 0;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        if(check_fibo(n) == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}