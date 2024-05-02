#include<iostream>
using namespace std;

int GCD(long long n){
    int sum = 0;
    long long temp = n;
    while(temp > 0){
        sum += (temp % 10);
        temp/=10;
    }
    while(n != sum){
        if(n > sum){
            n-=sum;
        }
        else{
            sum-=n;
        }
    }
    return n;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        long long b = a;
        while(b >= a){
            if(GCD(b) > 1){
                cout << b <<"\n";
                break;
            }
            else{
                b++;
            }
        }
    }
}