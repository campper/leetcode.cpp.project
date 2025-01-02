#include <iostream>
#include <vector>
#include "include/SparseGraph.h"
#include "include/DenseGraph.h"
#include "include/ReadGraph.h"

using namespace std;

// int main()
// {
//     int N = 20;
//     int M = 100;

//     srand(time(NULL));
    
//     // Sparse Graph
//     SparseGraph g1(N,false);
//     for(int i=0;i<M;i++){
//         int a = rand()%N;
//         int b = rand()%N;
//         g1.addEdge(a,b);
//     }

//     // O(E)
//     for(int v = 0;v < N; v ++){
//         cout<<v<<" : ";
//         SparseGraph::adjIteratoer adj( g1,v );
//         for(int w = adj.begin();!adj.end(); w = adj.next()){
//             cout<<w<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
    
//     DenseGraph g2(N,false);
//     for(int i=0;i<M;i++)
//     {
//         int a = rand() %N;
//         int b = rand() %N;
//         g2.addEdge(a,b);
//     }
    
//     // O(V^2)
//     for(int v = 0; v < N; v++)
//     {
//         cout<<v<<":";
//         DenseGraph::adjIteratoer adj(g2,v);
//         for(int w = adj.begin(); !adj.end(); w = adj.next())
//         {
//             cout<<w<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

//     // vector<int> arr({1,2,3,4,5});
//     // vector<int>::iterator iter;
//     // for(iter = arr.begin(); iter!=arr.end(); iter++){
//     //     cout<<*iter<<endl;
//     // }
//     // return 0;
// }

int main()
{
    std::string filename = "test/testG1.txt";
    SparseGraph g1(13,false);
    ReadGraph<SparseGraph> readGraph1(g1,filename);
    g1.show();

    DenseGraph g2(13,false);
    ReadGraph<DenseGraph> read_graph2(g2,filename);
    g2.show();

    return 0;
}