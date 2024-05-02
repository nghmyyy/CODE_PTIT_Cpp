#include<iostream>
#include <iomanip>
#include<string.h>
using namespace std;

int main(){
    int n;
    int diem = 0;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int a;
        string cau;
        cin >> a >> cau;
        string quiz1 = "ABBADCCABDCCABD";
        string quiz2 = "ACCABCDDBBCDDBB";
        if(a == 101){
            for(int j = 0 ; j < 15; j++){
                if(cau[0]==quiz1[i]) diem++;
            }
        }
        else if(a == 102){
            for(int j = 0; i < 15; j++){
                if(cau[0]==quiz2[i]) diem++;
            }
        }
        std :: cout << fixed << setprecision(2) << diem/1.5 << endl;    
    }
}