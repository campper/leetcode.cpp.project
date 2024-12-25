#include <iostream>
#include <vector>
#include "SparseGraph.h"

using namespace std;

int main()
{
    int N = 20;
    int M = 100;

    srand(time(NULL));
    
    // Sparse Graph
    SparseGraph g1(N,false);
    for(int i=0;i<M;i++){
        int a = rand()%N;
        int b = rand()%N;
        g1.addEdge(a,b);
    }

    for(int v = 0;v < N; v ++){
        cout<<v<<" : ";
        SparseGraph::adjIteratoer adj(g1,v);
        for(int w = adj.begin();!adj.end(); w = adj.next()){
            cout<<w<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;

    // vector<int> arr({1,2,3,4,5});
    // vector<int>::iterator iter;
    // for(iter = arr.begin(); iter!=arr.end(); iter++){
    //     cout<<*iter<<endl;
    // }
    // return 0;
}