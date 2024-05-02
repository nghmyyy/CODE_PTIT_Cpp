#include<bits/stdc++.h>
using namespace std;
int check_prime(int n){
    if(n > 2){
        for(int i = 3; i <= sqrt(n); i++){
            if(n%i==0){
                return 0;
                break;
            }
        }
        return 1;
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            if(i == 1){
                cout << "1 ";
            }
            else if(i%2==0){
                cout << "2 ";
            }
            else if(check_prime(i) != 0){
                cout << i <<" ";
            }
            else{
                for(int j = 3; j <= i; j++){
                    if(i%j==0){
                        cout << j <<" ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    
}