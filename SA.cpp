/**
* @file main.cpp
 * @author ghostface
 * @brief Learn Tmp
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
double T = 400,Ts = 1;
double alpha = 0.99;
int eps = 100;
int a[105];
int n;
int maxn=-9999999,now;
int main() {
    srand((unsigned)time(NULL));
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (;T>Ts;) {
        T *= alpha;
        for (int i=1;i<=eps;i++) {
            int t =  (rand() % (n-1+1))+ 1;
            if (T>=320) {
                cout<<"T = "<<T<<" ,eps = "<<i<<" ,P = "<<exp((-(now-a[t]))/T)<<" ,now = "<<now<<" ,maxn = "<<maxn<<endl;
            }
            if (exp((-(now-a[t]))/T)>=0.5) {
                now = a[t];
                maxn = max(maxn,now);
            }
        }
    }
    cout<<now<<endl;
}