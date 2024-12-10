#ifndef _UNION_FIND3_H_
#define _UNION_FIND3_H_

#include <iostream>
#include "cassert"

using namespace std;

namespace UF3
{
    class UnionFind
    {
        private:
            int* parent;
            int* sz; // sz[i]以i为根的集合元素个数
            int count;
        public:
        UnionFind(int count){
            this->count = count;
            parent = new int[count];
            sz = new int[count];
            for (int i = 0; i < count; i++)
            {
                parent[i] = i;
                sz[i] = 1;
            }
        }
        ~UnionFind(){
            delete[] parent;
            delete[] sz;
        }

        int find(int p){
            assert(p >= 0 && p < count);
            while(p != parent[p]){
                p = parent[p];
            }
            return p;
        }

        bool isConnected(int p, int q){
            return find(p) == find(q);
        }

        void unionElements(int p, int q){
            int pRoot = find(p);
            int qRoot = find(q);
            if(pRoot == qRoot) return;
            if(sz[pRoot] < sz[qRoot])
            {
                parent[pRoot] = qRoot;
                sz[qRoot] += sz[pRoot];
            }
            else
            {
                parent[qRoot] = pRoot;
                sz[pRoot] += sz[qRoot];
            }
        }
    };
}
#endif // _UNION_FIND3_H_
