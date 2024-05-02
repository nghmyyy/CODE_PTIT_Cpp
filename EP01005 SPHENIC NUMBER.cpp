#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        long long e;
        cin >> e;
        long long a = 2;
        int count = 0;
        int count1 = 0;
        int max = 0;
        while(a <= e){
            while(e%a==0){
                count++;
                count1++;
                e/=a;
            }
            if(e % a != 0) {
                a++;
            }
        	if(count1 > max){
        		max = count1;
        	}
        	count1 = 0;
        }
        if(count==3 && max <= 1){
            cout <<"1\n";
        }
        else{
            cout << "0\n";
        }
    }
}
