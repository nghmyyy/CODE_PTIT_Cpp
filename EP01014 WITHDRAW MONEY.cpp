#include<iostream>
using namespace std;
void withdraw(long long n){
    int count = 0;
    while(n>0){
        if(n>=1000){
            n-=1000;
            count++;
        }
        else if(n<1000 && n>=500){
            n-=500;
            count++;
        }
        else if(n<500 && n>=200){
            n-=200;
            count++;
        } 
        else if(n<200 && n >= 100){
            n-=100;
            count++;
        }
        else if(n<100 && n>=50){
            n-=50;
            count++;
        }
        else if(n<50 && n>=20){
            n-=20;
            count++;
        }
        else if(n<20 && n>=10){
            n-=10;
            count++;
        }
        else if(n<10 && n>=5){
            n-=5;
            count++;
        }
        else if(n<5 && n>=2){
            n-=2;
            count++;
        }
        else if(n<2 && n>=1){
            n-=1;
            count++;
        }
    }
    cout << count << "\n";

}
int main(){
    int n;
    cin>>n;
    for(int i=0; i < n ; i++){
        long long a;
        cin >> a;
        withdraw(a);
    }
}