#include <iostream>
#include <vector>
#include "include/SparseGraph.h"
#include "include/DenseGraph.h"
#include "include/ReadGraph.h"
#include "model/Component.h"
#include "model/Path.h"

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

// int main()
// {
//     std::string filename = "test/testG1.txt";
//     SparseGraph g1(13,false);
//     ReadGraph<SparseGraph> readGraph1(g1,filename);
//     g1.show();

//     DenseGraph g2(13,false);
//     ReadGraph<DenseGraph> read_graph2(g2,filename);
//     g2.show();

//     return 0;
// }

// int main(){
//     //TestG1.txt
//     string filename1 = "testG1.txt";
//     SparseGraph g1 = SparseGraph(13,false);
//     ReadGraph<SparseGraph> readGraph1(g1,filename1);
//     Component<SparseGraph> component1(g1);
//     cout<<"TestG1.txt,Component Count:  "<<component1.count()<<endl;

//     cout<<endl;

//     //TestG2.txt
//     string filename2 = "testG2.txt";
//     DenseGraph g2 = DenseGraph(6,false);
//     ReadGraph<DenseGraph> readGraph2(g2,filename2);
//     Component<DenseGraph> component2(g2);
//     cout<<"TestG2.txt,Component Count:  "<<component2.count()<<endl;
    
//     return 0;
// }

int main() {
    
    string filename  = "testG1.txt";
    DenseGraph g = DenseGraph(13,false);
    ReadGraph<DenseGraph> readgraph2(g,filename);
    g.show();
    cout<<endl;

    Path<DenseGraph> path2(g,0);
    cout<<"Path from 0 to 12 : " << endl;
    path2.showPath(6);
    cout<<endl;

    return 0;

}
