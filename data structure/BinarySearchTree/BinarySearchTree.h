//
// Created by alxor on 10/12/2023.
//

#ifndef LEETCODE_CPP_PROJECT_BINARYSEARCHTREE_H
#define LEETCODE_CPP_PROJECT_BINARYSEARCHTREE_H

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
            this->_left = this->_right = NULL;
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
    }

    int size(){
        return _count;
    }

    bool isEmpty(){
        return _count == 0; // return root == NULL
    }
    
    void insert(Key key,Value value){

        insert();
    }

};


#endif //LEETCODE_CPP_PROJECT_BINARYSEARCHTREE_H
