//
// Created by alxor on 10/12/2023.
//

#ifndef __BINARYSEARCHTREE_H__
#define __BINARYSEARCHTREE_H__

#include <iostream>
#include <queue>

template <typename Key,typename Value>
class BST {
private:
    struct Node{
        Key _key;
        Value _value;
        Node *_left;
        Node *_right;

        Node(Key key,Value value){
            this->_key = key;
            this->_value = value;
            this->_left = NULL;
            this->_right = NULL;
        }

        Node(Node *node){
            this->_key = node->_key;
            this->_value = node->_value;
            this->_left = node->_left;
            this->_right = node->_right;
        }

    };
    Node *_root;
    int _count;
public:
    BST(){
        _root = NULL;
        _count = 0;
    }

    ~BST(){
        // TODO: ~ BST()
        destroy(_root);
    }

    int size(){
        return _count;
    }

    bool isEmpty(){
        return _count == 0; // return root == NULL
    }
    
    void insert(Key key,Value value){

        _root = insert(_root,key,value);
    }
    bool contain(Key key){
        return contain(this->_root,key);
    }

    

    //  Node* 
    //  Value
    //  指针可以为空元素
    Value* search(Key key){
        return search(this->_root,key);
    }

    //  前序遍历
    void preOrder(){
        preOrder(this->_root);
    }

    //  中序遍历
    void inOrder(){
        inOrder(this->_root);
    }
    //  后序遍历
    void postOrder(){
        postOrder(this->_root);
    }

    //  层序遍历
    void levelOrder(){
        queue<Node*> q;
        q.push(this->_root);
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            cout<<node->_key<<" ";
            if(node->_left)
                q.push(node->_left);
            if(node->_right)
                q.push(node->_right);
        }
        cout<<endl;
    }

    //  寻找最小键值
    Key minimum(){
        assert( _count != 0);
        Node* minNode = minimum(_root);
        return minNode->_key;
    }

    //  寻找最大键值
    Key maximum(){
        assert( _count != 0);
        Node* maxNode = maximum(_root);
        return maxNode->_key;
    }

    //  删除最小键值
    void removeMin(){
        if(_root){
            _root = removeMin(_root);
        }
        
    }

    //  删除最大键值
    void removeMax(){
        if(_root){
            _root = removeMax(_root);
        }
    }

    //  删除指定的key
    void remove(Key key){
        _root = remove(root,key);
    }
private:
    // 向以node为根的二叉搜索树中,插入节点(key，value)
    // 返回插入新节点后的二叉搜索树的根
    Node* insert(Node *node,Key key,Value value){
        if(node == NULL){
            _count ++;
            return new Node(key,value);
        }

        if(key == node->_key){
            node->_value = value;
        } else if(key < node->_key){
            node->_left = insert(node->_left,key,value);
        } else {
            node->_right = insert(node->_right,key,value);
        }

        return node;

    }

    // 查看以node为根的二叉搜索树种是否包含键值为key的节点
    bool contain(Node* node,Key key){
        if(node == NULL){
            return false;
        }

        if(key == node->_key){
            return true;
        } else if (key < node->_key){
            return contain(node->_left,key);
        } else {
            return contain(node->_right,key);
        }
    }

    Value* search(Node* node,Key key){
        if(node == NULL){
            return NULL;
        }
        if(key == node->_key){
            return &(node->_value);
        } else if (key < node->_key){
            return search(node->_left,key);
        } else {
            return search(node->_right,key);
        }
    }

    // 以node为根对二分搜索树进行前序遍历
    void preOrder(Node* node){
        if(node != NULL){
            cout << node->_key << endl;
            preOrder(node->_left);
            preOrder(node->_right);
        }
    }

    // 以node为根对二分搜索树进行中序遍历
    void inOrder(Node* node){
        if(node != NULL){
            inOrder(node->_left);
            cout << node->_key << endl;
            inOrder(node->_right);
        }
    }

    // 以node为根对二分搜索树进行后序遍历
    void postOrder(Node* node){
        if(node != NULL){
            postOrder(node->_left);
            postOrder(node->_right);
            cout << node->_key << endl;
        }

    }

    void destroy(Node* node){
        if(node != NULL){
            destroy(node->_left);
            destroy(node->_right);

            delete node;
            this->_count--;
        }

    }

    Node* minimum(Node* node){
        if(node->_left == NULL){
            return node;
        }
        return minimum(node->_left);
    }

    //  删除掉以node为根的二分搜索树的最小节点
    //  返回删除节点后新的二分搜索树的根
    Node* removeMin(Node* node){
        if(node->_left == NULL){
            Node* rightNode = node->_right;
            // node->_right = NULL;
            delete node;
            this->_count--;
            return rightNode;
        }
        node->_left = removeMin(node->_left);
        return node;
    }

    //  删除掉以node为根的二分搜索树的最大节点
    Node* removeMax(Node* node){
        if(node->_right == NULL){
            Node* leftNode = node->_left;
            // node->_left = NULL;
            delete node;
            this->_count--;
            return leftNode;
        }
        node->_right = removeMax(node->_right);
        return node;
    }

    Node* maximum(Node* node){
        if(node->_right == NULL){
            return node;
        }
        return maximum(node->_right);
    }

    Node* remove(Node* node, Key key){
        if(node == NULL)
            return NULL;

        if(key < node->_key){
            node->_left = remove(node->_left, key);
            return node;
        } else if(key > node->_key){
            node->_right =  remove(node->_right, key);
        }   else {
            // key == node->key
            if(node->_left == NULL){
                Node * rightNode = node->_right;
                // node->_right = NULL;
                delete node;
                _count--;
            }

            if(node->_right == NULL){
                Node * leftNode = node->_left;
                // node->_left = NULL;
                delete node;
                _count--;
                return leftNode;
            }

            // Node *delNode = node;
            //  不太理解
            Node *successor = minimum(node->_right);
            successor->_right = removeMin(node->_right);
            successor->_left = node->_left;
            return successor;
        }
    }

    // Node* successor(Node* node){
    //     if(node->_right != NULL){
    //         return minimum(node->_right);
    //     }

    //     Node* parent = node->_parent;
    //     while(parent != NULL && parent->_right == node){
    //         node = parent;
    //         parent = node->_parent;
    //     }
    //     return parent;
    // }

};


#endif // __BINARYSEARCHTREE_H__
