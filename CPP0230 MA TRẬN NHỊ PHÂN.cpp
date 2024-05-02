#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1001][4];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    int sum;
    int j = 0;
    int count = 0;
    int i = 0;
    while(i < n){
        sum = 0;
        for(int j = 0; j < 3; j++){
            sum += a[i][j];
        }
        if(sum >= 2){
            count ++;
        }
        i++;
    }
    cout << count << endl;

}