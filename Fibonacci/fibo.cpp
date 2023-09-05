#include <bits/stdc++.h>

using namespace std;

int fibo(int t){
    if(t < 2) return t;
    else return fibo(t-2)+fibo(t-1);
}
int main(){
    int t;
    cin>>t;
    cout<<fibo(t)<<endl;

    return 0;
}
