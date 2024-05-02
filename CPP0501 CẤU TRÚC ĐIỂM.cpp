#include<bits/stdc++.h>
using namespace std;
struct Point
{
   double x , y;
};
void in(Point &a){
    cin >> a.x >> a.y;
}
double distance(Point a, Point b){
    double kq;
    return kq = sqrt((a.x-b.x)*(a.x - b.x) + (a.y-b.y)*(a.y-b.y));
}
int main(){
    struct Point A, B;
    int t; cin >> t;
    while (t--)
    {
        in(A);
        in(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    
}
