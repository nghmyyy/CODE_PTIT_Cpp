#include<bits/stdc++.h>
using namespace std;
void doicho (long long a, long long b){
    if(a > b){
        long long temp = a;
        a = b;
        b = temp;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        long long a, b, m ,n;
        cin >> m >> n >> a >> b;
        doicho(m,n);
        long long count = 0;
        long long x = a*b/__gcd(a,b);
        for(long long i = m; i <= n; i++ ){
            if(i % x == 0){
                count++;
            }
            else if((i%a == 0 || i%b == 0) && i%x != 0){
                count++;
            }
        }
        cout << count << endl;
    }

}