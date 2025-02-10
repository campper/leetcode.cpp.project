#ifndef _KRUSKALMST_H_
#define _KRUSKALMST_H_
#include <iostream>
#include <vector>

#include "../model/Edge.h"

using namespace std;

template<typename Graph,typename Weight>
class KruskalMST{

private:
    vector<Edge<Weight> > mst;

};

#endif // _KRUSKALMST_H_