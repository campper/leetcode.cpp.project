#ifndef _SELECTION_SORT_H_
#define _SELECTION_SORT_H_

#include <iostream>
#include <algorithm>

using namespace std;

// 选择排序算法
template<typename T>
void selectionSort(T arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

#endif // !_SELECTION_SORT_H_