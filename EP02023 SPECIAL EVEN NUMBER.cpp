#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int a[1000];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int min;
        for(int i = 0; i < n;i++){
            for(int j = i + 1; j < n; j++){
                min = abs(a[0]-a[1]);
            }
        }
        for(int i = 0; i < n;i++){
            for(int j = i + 1; j < n; j++){
                int e = a[i] - a[j];
                if(abs(e) < min) {
                    min = abs(e);
                }
            }
        }
        cout << min <<endl;
    } 
}