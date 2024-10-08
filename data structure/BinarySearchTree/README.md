# 二分搜索树
## 二分搜索树基础
每个节点的键值大于左孩子
每个节点的键值小于右孩子
以左右孩子为根的子树仍为二叉树

##  二分搜索树的节点插入
1.  插入的值已经在二分搜索树中存在，则覆盖原存在的数值

##  二分搜索树的遍历
1.  前序遍历：根节点->左子树->右子树
2.  中序遍历：左子树->根节点->右子树
3.  后序遍历：左子树->右子树->根节点
4.  二叉树删除


##  二叉树层序遍历
1.  广度优先遍历（广度优先遍历）

##  二分搜索树删除
1.  删除最小值：只会有右孩子
2.  删除最大值：只会有左孩子

## 删除左右都有孩子的节点

* Hubbard Deletion
左右都有节点的删除法 Hubbard Deletion
思想原理是找当前要删除节点的右子树的最小值

因为右子树中的节点一定大于左子树的值
要找D的后继节点 S--> Seccessor

```c++
s = min(d->right)
```
s是d的后继节点
```c++
s->right = delMin(d->right)
s->left = d->left
```
删除d,s是新的子树的根

## 二分搜索树的顺序性
```
floor ceil
```
floor:地板
ceil:天花板

```
rank select
```

# 二分搜索树的局限性

二分搜索树退化成了一个链表


# 平衡二叉树
最为著名的实现：红黑树

Treap 树
Trie 树

# 树形问题
递归法是天然的树形性质
