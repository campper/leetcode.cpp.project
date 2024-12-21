#ifndef _UNION_FIND5_H_
#define _UNION_FIND5_H_

#include <iostream>
#include "cassert"

using namespace std;

namespace UF5
{
    class UnionFind
    {
        private:
            int* parent;
            int* rank; // rank[i]
            int count;
        public:
        UnionFind(int count){
            this->count = count;
            parent = new int[count];
            rank = new int[count];
            for (int i = 0; i < count; i++)
            {
                parent[i] = i;
                rank[i] = 1;
            }
        }
        ~UnionFind(){
            delete[] parent;
            delete[] rank;
        }

        int find(int p){
            assert(p >= 0 && p < count);
            // while(p != parent[p]){
            //     parent[p] = parent[parent[p]];
            //     p = parent[p];
            // }
            // return p;
            if(p != parent[p]){
                parent[p] = find(parent[p]); //递归压缩路径
            }
            return parent[p];
        }

        bool isConnected(int p, int q){
            return find(p) == find(q);
        }

        void unionElements(int p, int q){
            int pRoot = find(p);
            int qRoot = find(q);
            if(pRoot == qRoot) return;
            if(rank[pRoot] < rank[qRoot])
            {
                parent[pRoot] = qRoot;
            }
            else if(rank[qRoot] < rank[pRoot])
            {
                parent[qRoot] = pRoot;
            }
            else
            {
                parent[qRoot] = pRoot;
                rank[pRoot] += 1;
            }
        }
    };
}
#endif // _UNION_FIND5_H_
