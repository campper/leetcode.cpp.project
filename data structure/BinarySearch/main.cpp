//
// Created by alxor on 2022/7/17.
//
#include <iostream>
#include <assert.h>

using namespace std;

// 二分查找法，在有序数组arr中，查找target
// 如果找到target，返回相应的索引index
// 如果没找到target，返回-1

template<typename T>
int binarySearch(T arr[],int n, T target){
    // 在arr[l...r]之中查找target
    int l=0,r=n-1;
    while( l <= r){
        // int mid = (l+r)/2;
        int mid = l + (r-l)/2;
        if(arr[mid] == target)
            return mid;
        if(arr[mid] > target)
            r = mid - 1;
        else // target > arr[mid]
            l = mid + 1;
    }
    return -1;
}

int main() {
    int n = 1000000;
    int* a = new int[n];
    for( int i = 0 ; i < n ; i ++ )
    {
        a[i] = i;
        // std::cout<<a[i]<<std::endl;
    }


    // 测试非递归二分查找法
    clock_t startTime = clock();

    // 对于我们的待查找数组[0...N)
    // 对[0...N)区间的数值使用二分查找，最终结果应该就是数字本身
    // 对[N...2*N)区间的数值使用二分查找，因为这些数字不在arr中，结果为-1
    for( int i = 0 ; i < 2*n ; i ++ ){
        int v = binarySearch(a, n, i);
        if( i < n )
            assert( v == i );
        else
            assert( v == -1 );
    }
    clock_t endTime = clock();
    cout << "Binary Search (Without Recursion): " << double(endTime - startTime) / CLOCKS_PER_SEC << " s"<<endl;
}
