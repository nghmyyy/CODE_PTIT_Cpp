#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countdigits(long long temp){
	int count = 0;
	while(temp > 0){
			temp /= 10;
			count++;
	}
	return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a;
		cin >> a;
		int array[20];
		long long temp = a;
		int digits = countdigits(a);
		//cout << digits << endl;
		int count1 = 0; 
		for(int i = digits - 1; i >= 0; i--){
			array[i] = temp%10;
			temp /= 10;
		}

		for(int i = 0; i < digits-1; i++){
			//cout<< array[i];
			if(array[i] - 1 != array[i+1] && array[i] + 1 != array[i+1]){
				count1++;
				cout <<"NO" <<endl;
				break;
			}
		}
		if(count1 == 0){
			cout << "YES" <<endl;
		}
	}
}
