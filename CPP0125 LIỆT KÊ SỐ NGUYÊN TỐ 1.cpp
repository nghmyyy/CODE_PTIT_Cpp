#include<bits/stdc++.h>
using namespace std;
int snt(long long n){
    if(n==0 || n == 1){
        return 0;
    }
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i==0){
                return 0;
                break;
            }
        }
        return n;
    }
}
void in_snt(long long a, long long b){
    for(long long i = a; i <= b; i++){
        if(snt(i) != 0){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    long long a, b;
    cin >> a >> b;
    in_snt(a, b);
}
