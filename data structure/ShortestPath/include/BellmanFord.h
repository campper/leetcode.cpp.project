#ifndef _BELLMAN_FORD_H_
#define _BELLMAN_FORD_H_
#include <stack>
#include <vector>
#include "Edge.h"

using namespace std;


template <typename Graph, typename Weight>
class BellmanFord {
    private:
        Graph &G;
        int s;
        Weight *distTo;
        vector<Edge<Weight>* > from;
        bool hasNegativeCycle;
        bool detectNegativeCycle() {
            for(int i = 0; i < G.V(); i++) {
                typename Graph::adjIterator adj(G,i);
                for(Edge<Weight> *e = adj.begin(); !adj.end(); e = adj.next()) {
                    int w = e->other(i);
                    if( !from[e->w()] || distTo[e->v()] + e->wt() < distTo[e->w()] ) {
                        return true;
                    }
                }
            }
            return false;
        }
    public:
        BellmanFord(Graph &graph, int s):G(graph){
            this->s = s;
            distTo = new Weight[G.V()];
            for( int i=0; i< G.V(); i++) {
                from.push_back(NULL);
            }

            // Bellman-Ford
            distTo[s] = Weight();
            for(int pass = 1; pass < G.V(); pass++) {
                // Relaxation
                for(int i = 0; i < G.V(); i++) {
                    typename Graph::adjIterator adj(G,i);
                    for(Edge<Weight> *e = adj.begin(); !adj.end(); e = adj.next()) {
                        int w = e->other(i);
                        if( !from[e->w()] || distTo[e->v()] + e->wt() < distTo[e->w()] ) {
                            distTo[e->w()] = distTo[e->v()] + e->wt();
                            from[e->w()] = e;
                        }
                    }
                }

                hasNegativeCycle = detectNegativeCycle();
            }
        }

        ~BellmanFord() {
            delete[] distTo;
        }

        bool negativeCycle() {
            return hasNegativeCycle;
        }

        Weight shortestPathTo(int w) {
            assert( w >= 0 && w < G.V() );
            assert( !hasNegativeCycle );
            assert( hasPathTo(w) );
            return distTo[w];
        }

        bool hasPathTo( int w ) {
            assert( w >= 0 && w < G.V() );
            return from[w] != NULL;
        }

        void shortestPath( int w, vector<Edge<Weight> > &vec ) {
            assert( w >= 0 && w < G.V() );
            assert(!hasNegativeCycle );
            assert( hasPathTo(w) );

            stack<Edge<Weight>* > s;
            Edge<Weight> *e = from[w];
            while( e->v() != this->s ) {
                s.push(e);
                e = from[e->v()];
            }

            
        }

        void showPath(int w) {

        }

         
};

#endif // !_BELLMAN_FORD_H_



