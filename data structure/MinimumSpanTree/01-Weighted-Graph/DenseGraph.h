//
// Create by alxor on 2025-01-16
//

#ifndef _INC_01_WEIGHTED_GRAPH_DENSEGRAPH_H_
#define _INC_01_WEIGHTED_GRAPH_DENSEGRAPH_H_

#include <iostream>
#include <vector>
#include <cassert>
#include "model/Edge.h"

using namespace std;

// 稠密图 - 邻接矩阵

template <typename Weight>
class DenseGraph
{

private:
    int n,m;        //  节点数和边数
    bool directed;  //  是否为有向图
    vector<vector<Edge<Weight> *>> g;   //  图的具体数据
    
public:
}


#endif // _INC_01_WEIGHTED_GRAPH_DENSEGRAPH_H_ 