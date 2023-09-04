#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4;
int dp[mx][mx];

int Combination(int n, int r) {
    if (r == 1) return n;
    if (n == r) return 1;
    if (dp[n][r]) return dp[n][r];
    return dp[n][r] = Combination(n-1, r) + Combination(n-1, r-1);
} 

int main() {
    int n, r;
    while(true){
    cin >> n >> r;
    memset(dp,0,mx);
    cout <<Combination(n, r) << endl;
    }
}
