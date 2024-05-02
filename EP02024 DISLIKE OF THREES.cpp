#include<iostream>
using namespace std;
int main(){

    int k;
    cin >> k;
    int n=1 ;
    int dem = 1;
    while(1){
        if(n%3 == 0 || (n%10) == 3){
            n++;
        }
        else{
            n++;
            dem++;
        }
        if(dem == k && n%10!=3 && n%3 != 0){
            break;
        }
    }
    cout << n;
}
    