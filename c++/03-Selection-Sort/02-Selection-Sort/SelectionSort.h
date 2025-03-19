#ifndef _SELECTIONSORT_H_
#define _SELECTIONSORT_H_
#include <iostream>
using namespace std;

class SelectionSort{
    private:
        SelectionSort(){}

        template<typename T>
        static void swap(T& arr, int i, int j){
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    public:
        ~SelectionSort(){}

        template<typename T>
        static void sort(T arr[], int n){
            for(int i = 0;i < n;i ++){
                int minIndex = i;
                for(int j = i + 1;j < n; j ++){
                    if(arr[j] < arr[minIndex]){
                        minIndex = j;
                    }
                }
                swap(arr,i,minIndex);
            }
        }


}; 
#endif // !_SELECTIONSORT_H_