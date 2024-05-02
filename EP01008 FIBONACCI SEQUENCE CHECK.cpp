#include<iostream>
using namespace std;

int fibo(long long n){
     int f0 = 0;
        int f1 = 1;
        int fn;
    if(n <= 2){
        return n;
    }
       
    else{
        for(int i = 0; i < n; i++){
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        return fn;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[1000];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 1000; j++){
                if(fibo(j) == a[i]){
                    cout << a[i] << " ";
                }
            }
        }
        cout << endl;
    }
}