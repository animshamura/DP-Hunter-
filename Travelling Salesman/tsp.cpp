#include <bits/stdc++.h>
using namespace std;
#define m INT_MAX
#define V 4

int TSP(int graph[][V], int s){
    
    vector<int> vex;
    
    for (int i = 0; i < V; i++){
        if (i != s) vex.push_back(i);
    }
 
    int path = m; 
  
    while(next_permutation(vex.begin(),vex.end())) {
        int current = 0;
        int k = s;
        for (int i = 0; i < vex.size(); i++) {
            current += graph[k][vex[i]];
            k = vex[i];
        }
        current += graph[k][s];
 
        path = min(path, current);
 
    } 
 
    return path;
}

int main(){
    int graph[][V] = { { 0, 10, 15, 20 },
                       { 5, 0, 9, 10 },
                       { 6, 13, 0, 12 },
                       { 8, 8, 9, 0 } };
    cout << "Minimum path to travel : "<<TSP(graph, 0) << endl;
    return 0;
}
