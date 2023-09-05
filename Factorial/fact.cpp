
#include <bits/stdc++.h>

using namespace std;

int fact(int t){
    if(t < 2) return 1;
    else return t*fact(t-1);
}
int main(){
    int t;
    cin>>t;
    cout<<fact(t)<<endl;

    return 0;
}
