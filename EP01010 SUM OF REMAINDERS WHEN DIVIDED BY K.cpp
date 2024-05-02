#include<iostream>
#include<math.h>
using namespace std;
int abc(long long a, int b){
    long long sum = 0;
    long long temp = a;
    while( b > 0){
       sum += b%a; 
        b--;
    }
    if(sum==temp){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i < n;i++ ){
        long long a;
        int b;
        cin >> b >> a;
        if(abc(a,b)==1){
            cout << "1\n";
        }
        else{
            cout<<"0\n";
        }
    }
    cout << endl;
}