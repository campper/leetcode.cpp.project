#include <iostream>
#include "heap.h"

int main() {
    MaxHeap<int> maxheap = MaxHeap<int>(100);
    cout<<"Max Heap Size initial is:";
    cout<<maxheap.size()<<endl;

    srand(time(NULL));
    for(int i=0;i<50;i++){
        maxheap.insert( rand()%100 );
    }

    maxheap.testPrint();
    cout<<maxheap.size()<<endl;

    while(!maxheap.isEmpty()){
        cout<<maxheap.extractMax()<<" ";
    }
    system("pause");
    return 0;
}