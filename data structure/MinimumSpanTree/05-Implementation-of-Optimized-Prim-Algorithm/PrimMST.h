//
// Create by alxor on 2025-01-18
//
#ifndef _PRIM_MST_H_
#define _PRIM_MST_H_

#include <iostream>
#include <cassert>
#include <vector>
#include "../model/Edge.h"

template<typename Graph,typename Weight>
class PrimMST
{
    private:
        bool* marked;
        Graph &G;
        vector<Edge<Weight> > mst;
        Weight mstWeight;

        void visit(int v)
        {
            assert( !marked[v] );
            marked[v] = true;

            typename Graph::adjIterator adj(G,v);
            for(Edge<Weight>* e = adj.begin(); !adj.end();e = adj.next())
            {

            }
        }
 
    public:
        // 构造函数，初始化PrimMST对象
        // 参数:
        //   graph: 输入的图对象
        PrimMST(Graph &graph):G(graph),ipq(IndexMinHeap<double>(graph.V())){
            // 为marked数组分配空间，大小为图中顶点的数量
            marked = new bool[G.V()];
            // 初始化marked数组，将所有元素设置为false
            for( int i = 0; i <G.V(); i++){
                marked[i] = false;
            }
        }

};

#endif // _PRIM_MST_H_