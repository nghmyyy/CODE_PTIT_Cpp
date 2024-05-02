#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i;
        int n, k;
        int a[100000];
        scanf("%d%d", &n,&k);
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int max = 0;
        while(n >= k){
            for(i = 0; i < k; i++){
                if(a[i] > max){
                    max = a[i];
                }
            }
                printf("%d ", max); 
            n--;       
            for(i = 0; i < n; i++){
                a[i] = a[i+1];
            }
        }
        printf("\n");
    }
}