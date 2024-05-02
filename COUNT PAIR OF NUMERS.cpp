#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        int a[1000];
        int b;
        cin >> x >> b;
        for(int i = 0; i < x; i++){
            cin >> a[i];
        }
        int count = 0;
        for(int i = 0; i < x; i++){
            for(int j = i + 1 ; j < x ;j++){
                if((a[i]+a[j]) >= b){ 
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
}