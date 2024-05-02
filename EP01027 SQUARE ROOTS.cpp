#include <bits/stdc++.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		double a = 0.000000;
		double b = 0.000000 ;
		while(n >= a){
			b = sqrt( a + b);
			a++;
		}
		printf("%.5f\n", b);
	}
}
			
