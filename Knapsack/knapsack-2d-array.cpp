
#include<bits/stdc++.h>

using namespace std;

int sol [5][1000];
int w [] = {0,3,2,5,4};
int v [] = {0,4,3,6,5};


void Knapsack(int wi){
   for(int i = 0; i <= 4; i++) {
       
       for(int j = 0; j <= wi; j++ ){
           
           if(i==0 || j==0) sol[i][j] = 0;
           
           else if(w[i] <= j) sol[i][j] = max(sol[i-1][j],sol[i-1][j-w[i]]+v[i]);
           
           else sol[i][j] = sol[i-1][j];
       }
   }
}

int main(){
    int maxW;
    cout<<"Enter a number between 1000 : ";
    cin>>maxW;
    Knapsack(maxW);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= maxW; j++) { cout<<sol[i][j]<<" ";}
        cout<<endl;}
        
                 
    cout<<"The maximum profit is "<<sol[4][maxW]<<endl;
    return 0;
}
