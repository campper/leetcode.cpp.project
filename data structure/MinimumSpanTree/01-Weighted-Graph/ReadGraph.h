//
//  Created by alxor 2025-01-17
//

#ifndef _INC_01_WEIGHTED_GRAPH_READGRAPH_H_
#define _INC_01_WEIGHTED_GRAPH_READGRAPH_H_

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cassert>

using namespace std;

//  读取有权图
template <typename Graph,typename Weight>
class ReadGraph{
    public:
    //  从文件filename中读取有权图的信息，存储进图graph中
    ReadGraph(Graph &graph,const string &filename){
        
        ifstream file(filename);
        string line;
        int V,E;

        assert(file.is_open());

        //  第一行读取图中的节点个数和边的个数
        assert( getline(file,line));
        stringstream ss(line);

        ss >> V >> E;
        assert( graph.V() == V );

        //  读取每一条边的信息
        for( int i = 0 ; i < E; i++){
            assert( getline(file,line) );
            stringstream ss(line);

            int a,b;
            Weight w;

            ss >> a >> b >> w;
            assert( a >= 0 && a < V );
            assert( b >= 0 && b < V );
            graph.addEdge(a,b,w);
        }
    }
};

#endif // _INC_01_WEIGHTED_GRAPH_READGRAPH_H_