#include <bits/stdc++.h>
#define inf 9999
using namespace std;

vector<vector<int> >dist;

void Warshall(int n){
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(dist[i][j] > dist[i][k]+dist[k][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
					
				}
			}
		}
	}
}



void Print(int n){
    
	for(int i=0;i<n;i++){
	    
		for(int j=0;j<n;j++){
		    
			if(dist[i][j] != inf){
			    
			    cout<<"inf"<<" ";
			}
			
			else cout<<dist[i][j]<<" ";
				
		}
		cout<<endl; 
	}
}
int main(){
    int v,t;
    cout<<"Enter number of vertex : ";
    cin>>v;
    dist.resize(v);
    for(int i=0;i<v;i++){
	    
    dist[i].resize(v);  
	
    for(int j=0;i<v;j++){
	   
      cin>>dist[i][j];
     	
  }
}
   Warshall(v);
   Print(v);
}
