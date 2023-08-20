#include <bits/stdc++.h>

using namespace std;

#define inf 9999

int v, mat [1000][1000];

void print(){
    
    for(int i = 0; i < v; i++){
            
          for(int j = 0; j < v; j++){
              
             if(mat[i][j]==inf)cout<<"inf"<<" ";
    
             else  cout<<mat[i][j]<<" ";
          }
          cout<<endl;
    }
}

void warshall (){
    
    for(int k = 0; k < v; k++){
        
        for(int i = 0; i < v; i++){
            
          for(int j = 0; j < v; j++) {
              
              if(mat[i][k]+mat[k][j] < mat[i][j]){
                  
                    mat[i][j] = mat[i][k]+mat[k][j];
              }
          }
        }
    }
    print();
}

int main(){
    cout<<"Enter the number of vertex : ";
    
    cin>>v;
    
    cout<<"Enter the adjacency matrix of the graph : ";
    
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cin>>mat[i][j];
        }
    }
    warshall();
    return 0;
}
