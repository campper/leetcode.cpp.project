// 并查集
#ifndef __QUICK_UNION_H__
#define __QUICK_UNION_H__
#include<iostream>
namespace UF2 {
    class UnionFind
    {
        private:
        int* parent;
        int count;
        public:
        UnionFind(int count)
        {
            parent = new int[count];
            this->count = count;
            for(int i=0;i<count;i++){
                parent[i] = i;
            }
        }

        int find(int p){
            while(p!=parent[p]){
                p = parent[p];
            }
            return p;
        }
        bool isConnected(int p,int q){
            return find(p)==find(q);
        }
        
        void unionElements(int p,int q){
            int pRoot = find(p);
            int qRoot = find(q);
            if(pRoot==qRoot) return;
            parent[pRoot] = qRoot;
        }
    }
}

#endif // !__QUICK_UNION_H__
