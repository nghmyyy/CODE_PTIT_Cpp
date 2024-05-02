#include<iostream>
#include<math.h>
using namespace std;
int checkprime (long long n){
    if( n <= 1){
        return 0;
    }
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i==0){
                return 0;
                break;
            }
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long j;
        long long i = 2;
        while(i <= n/2){
            j = n - i;
            if(checkprime(i)==1 && checkprime(j)==1){
                cout << i <<" "<< j;
                break;
            }
            else{
                i++;
            }

        }
        if(i > n/2){
            cout << "-1";
        }
        cout << endl;
    }
}