#include<iostream>
#include<math.h>
using namespace std;
int ucln(long long a, long long b){
    if(a==0 || b==0){
        return a + b; 
    }
    while(a != b){
        if(a > b){
            a-=b;
        }
        if( b > a ){
            b-=a;
        }
    }
    return a;
}
int bcnn(long long a, long long b){
    return (a*b)/ucln(a,b);
}
int main(){
    int e;
    cin >> e;
    long long x, y , z;
    int n;
    for(int i = 0; i < e; i++){
        cin >> x >> y >> z >> n;
        long long temp1 = bcnn(x,y);
        long long temp2 = bcnn(temp1, z);
        long long a = pow(10, n-1);
        long long a1= pow(10, n);
        if(temp2 > a1){
            cout << "-1" << endl;
        }
        else{
            long long res = a/temp2;
            if(a1 % temp2 != 0) res++;
            cout << res * temp2 <<endl;
        }
    
}