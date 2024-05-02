#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b;
    int sum = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(ceil(sqrt(i)) == ((int)sqrt(i))){
            sum += i;
        }
    }
    cout << sum << endl;
}