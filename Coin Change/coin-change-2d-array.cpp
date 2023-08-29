
#include<bits/stdc++.h>

using namespace std;

int sol [4][1000];
int arr [] = {0,1,3,5};

void coinChange(int target){
   for(int i = 0; i < 4; i++) {
       for(int j = 0; j <= target; j++ ){
           if ( i==0) {
               if(j==0) sol[i][j] = 1;
               else sol[i][j] = 0;
           }  
           
           else {
               if(arr[i] > j)  sol[i][j] = sol[i-1][j];
               else sol[i][j] = sol[i-1][j]+sol[i][j-arr[i]];
           }  
       }
   }
}

int main(){
    int target;
    cout<<"Enter a number between 1000 : ";
    cin>>target;
    coinChange(target);
    cout<<"The number of ways coins can be choosed for the target amount is "<<sol[3][target]<<endl;
    return 0;
}
