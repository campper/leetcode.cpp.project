#ifndef _GRAPH_SPARSEGRAPH_H_
#define _GRAPH_SPARSEGRAPH_H_

#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

// 稀疏图 - 邻接表
class SparseGraph{
    private:
    int n,m;
    bool directed;
    vector<vector<int>> g;
    public:
    SparseGraph(int n,bool directed){
        this->n = n;
        this->m = 0;
        this->directed = directed;
        for(int i=0;i<n;i++){
            g.push_back(vector<int>());
        }
    }

    ~SparseGraph() {

    }
    
    int V() { return n; }
    int E() { return m; }

    void addEdge(int v,int w){
        assert(v>=0 && v < n);
        assert(w>=0 && w < n);
        g[v].push_back(w);
        if(v != w && !directed){
            g(w).push_back(v);
        }
        m ++;
    }

};


#endif // _GRAPH_SPARSEGRAPH_H_