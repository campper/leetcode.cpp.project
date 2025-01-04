//
// Created by alxor on 2/1/2025
//
#ifndef _GRAPH_COMPONENT_H_
#define _GRAPH_COMPONENT_H_

#include <iostream>
#include <cassert>

using namespace std;

template <typename Graph>
class Component{
    private:
    Graph &G;
    bool *visited;
    int ccount;
    void dfs(int v){
        visited[v] = true;

        typename Graph::adjIterator adj(G,v);
        for(int i=adj.begin();!adj.end(); i=adj.next()){
            if(!visited[i]){
                dfs(i); //递归
            }
        }
    }
    public:
    Component(Graph &graph): G(graph){
        visited = new bool[G.V()];
        ccount = 0;
        for(int i=0;i<G.V();i++)
        {
            visited = false;
        }

        for(int i=0;i<G.V();i++){
            if(!visited[i]){
                dfs(i);
                ccount ++;
            }
        }
    }

    ~Component(){
        delete[] visited;
    }

    int count(){
        return ccount;
    }


};
#endif // !_GRAPH_COMPONENT_H_