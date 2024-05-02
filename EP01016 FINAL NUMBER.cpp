#include<iostream>
using namespace std;
void finalnumber(long long n){
     int sum = 0;
    

    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    cout<< sum << "\n";
}
int main(){
    long long t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long n;
        cin >> n;
        finalnumber(n);
    }
}