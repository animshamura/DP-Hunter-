#include <bits/stdc++.h>

using namespace std;

#define v 4
#define inf 9999



void print(int mat [][v]){
    
    for(int i = 0; i < v; i++){
            
          for(int j = 0; j < v; j++){
              
             if(mat[i][j]==inf)cout<<"inf"<<" ";
    
             else  cout<<mat[i][j]<<" ";
          }
          cout<<endl;
    }
}

void warshall (int mat [][v]){
    
    for(int k = 0; k < v; k++){
        
        for(int i = 0; i < v; i++){
            
          for(int j = 0; j < v; j++) {
              
              if(mat[i][k]+mat[k][j] < mat[i][j]){
                  
                    mat[i][j] = mat[i][k]+mat[k][j];
              }
          }
        }
    }
    print(mat);
}

int main(){
    int mat [v][v] = {{0,3,inf,4}, {2,0,inf,3},{inf,4,0,inf}, {inf,inf,1,0}};
    warshall(mat);
    return 0;
}
