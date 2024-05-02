#include<iostream>
#include<math.h>
using namespace std;

int checksnt(long long n){
    long long sum = 0;
    while(n>0){
        long long e = n%10;
        sum += e;
        n/=10;
    }
    for(long long i = 2; i <= sqrt(sum); i++){
        if(sum%i==0){
            return -1;
            break;
        }
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        long long e;
        cin>>e;
        if(checksnt(e)==-1){
            cout<< "-1"<< "\n";
        }
        else{
            cout<< e << "\n";
        }
    }
}


