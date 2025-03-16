#include <iostream>
#include <ctime>
#include "SelectionSort.h"
using namespace std;

int main(){
    int data[5] = {24,18,12,9,16};
    int n = sizeof(data)/sizeof(data[0]);
    SelectionSort::sort(data,n);
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    return 0;
}