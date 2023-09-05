#include <bits/stdc++.h>

using namespace std;

int LCS(string a, string b, int p, int q){
    if(!(p+q)) return 0;
    else if(a[p-1]==b[q-1]) return 1+LCS(a,b,p-1,q-1);
    else return max(LCS(a,b,p,q-1),LCS(a,b,p-1,q));
}
int main(){
    int p,q;
    string a,b;
    cin>>a>>b>>p>>q;
    cout<<LCS(a,b,p,q)<<endl;

    return 0;
}
