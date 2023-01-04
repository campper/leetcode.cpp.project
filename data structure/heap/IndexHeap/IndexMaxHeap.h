#ifndef __INDEX_MAXHEAP_H__
#define __INDEX_MAXHEAP_H__
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

template<typename Item>
class IndexMaxHeap{
    private:
    Item* data_;
    int count_;
    int capacity_;
    int* indexes_;

    void shiftUp(int k){
        while(k>1 && data[indexes_[k/2]]< data[indexes_[k]]){
            swap(indexes_[k/2],indexes_[k]);
            k /= 2; 
        }
    }

    public:
    IndexMaxHeap(int capacity){
        data = new Item[capacity_+1];
        indexes_ = new int[capacity_+1];
        count_ = 0;
        this->capacity_ = capacity;
    }
    
    ~IndexMaxHeap(){
        delete [] data;
        delete[] indexes_;
    }

    void insert(int i,Item item){
        assert(count_+1 <= capacity_);
        assert(i+1 >= 1 && i+1 <= capacity_);
        i+=1;
        data_[i] = item;
        indexes_[count_+1] = i;
        count_++;

    }
}

#endif // !__INDEX_MAXHEAP_H__

