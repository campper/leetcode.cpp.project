//
// Created by alxor on 01/11/25.
//

// Finding a Loop

#ifndef _GRAPH_LOOP_H_
#define _GRAPH_LOOP_H_

#include <iostream>
#include <cassert>
#include <vector>
#include <stack>

using namespace std;

// 路径查询
template <typename Graph>
class Loop
{
    private:
        Graph &G;       // 图的引用
        int s;          // 起始点
        bool* visited;  // 记录dfs的过程中节点是否被访问
        int * from;     // 记录路径, from[i]表示查找的路径上i的上一个节点

    // 图的深度优先遍历
    void dfs(int v)
    {
        visited[v] = true;

        typename Graph::adjIterator adj(G,v);

        for(int i = adj.begin();!adj.end(); i = adj.next())
        {
            if(!visited[i])
            {
                from[i] = v;
                dfs(i); //递归    
            }
        }
    }
    public:
    
    // 构造函数, 寻路算法, 寻找图graph从s点到其他点的路径
    Path(Graph &graph,int s):G(graph){
        //算法初始化
        assert( s>=0 && s< G.V() );
        
        visited = new bool[G.V()];
        from = new int[G.V()];

        for(int i = 0;i < G.V(); i++){
            visited[i] = false;
            from[i] = -1;
        }
        this->s = s;

        // 寻路算法
        dfs(s);

    }

    ~Loop(){
        delete[] visited;
        delete[] from;
    }

    // 查询从s点到w点是否有路径
    bool hasLoop(int w){

    }

    void path(int w,vector<int> &vec){

        // assert( hasPath(w) );
        if(hasLoop(w))
        {
            stack<int> s;
        // 通过from数组逆向查找到从s到w的路径, 存放到栈中

        int p = w;
        while(p != -1){
            s.push(p);
            p = from[p];
        }

        // 从栈中依次取出元素, 获得顺序的从s到w的路径
        vec.clear();
        while(! s.empty()){
            vec.push_back( s.top());
            s.pop();
        }
        } else {
            cout<<"no Path"<<endl;
        }

    }

    // 打印出从s点到w点的路径
    void showPath(int w){
        vector<int> vec;
        path( w,vec );
        for(int i=0;i < vec.size();i++){
            cout<<vec[i];
            if( i == vec.size() - 1)
            {
                cout<<endl;
            } else {
                cout<<"->";
            }
        }
    }
    
};

#endif // !_GRAPH_Loop_H_
