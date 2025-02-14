#ifndef _KRUSKALMST_H_
#define _KRUSKALMST_H_
#include <iostream>
#include <vector>

#include "../model/Edge.h"
#include "MinHeap.h"
#include "UF.h"

using namespace std;

template<typename Graph,typename Weight>
class KruskalMST
{

private:
    vector<Edge<Weight> > mst;
    Weight mstWeight;

public:
    KruskalMST(Graph &graph)
    {
        MinHeap<Edge<Weight> > pq(graph.E());
        // 把所有的边都放入最小堆中
        for(int i=0;i < graph.V();i++)
        {
            
        }
        
    }

};

#endif // _KRUSKALMST_H_