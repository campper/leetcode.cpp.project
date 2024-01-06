//
// Created by alxor on 10/12/2023.
//

#ifndef LEETCODE_CPP_PROJECT_BINARYSEARCHTREE_H
#define LEETCODE_CPP_PROJECT_BINARYSEARCHTREE_H

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

};


#endif //LEETCODE_CPP_PROJECT_BINARYSEARCHTREE_H
