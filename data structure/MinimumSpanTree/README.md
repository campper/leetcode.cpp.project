# 第九章 最短路径
## 负权环

负权环是指环上的权值之和为负数的环，负权环会影响到单源最短路径的算法。

负权环不存在最短路径

Bellman-Ford算法可以检测负权环，如果没有负权环，则可以求出单源最短路径。

复杂度是O(EV)

## Bellman-Ford 单源最短路径算法

如果一个图没有，从一点到另外一点的最短路径，最多经过所有的V个顶点，如果有V+1个顶点，那么就有负权环。

存在顶点经过两次，即存在负权环。
