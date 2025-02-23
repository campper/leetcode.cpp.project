#include <iostream>
#include <algorithm> // 用于swap函数

using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low >= high) return; // 递归终止条件
    
    // 选择中间元素作为基准
    int pivot = arr[(low + high) / 2];
    int i = low;  // 左指针
    int j = high; // 右指针
    
    // 分区操作
    while (i <= j) {
        // 找到左边大于等于pivot的元素
        while (arr[i] < pivot) i++;
        // 找到右边小于等于pivot的元素
        while (arr[j] > pivot) j--;
        
        // 交换元素并移动指针
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    // 递归排序左右子数组
    quickSort(arr, low, j);  // 排序左半部分
    quickSort(arr, i, high); // 排序右半部分
}

// 测试用例
int main() {
    int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "原始数组: ";
    for (int num : arr) cout << num << " ";
    
    quickSort(arr, 0, n-1);
    
    cout << "\n排序后数组: ";
    for (int num : arr) cout << num << " ";
    
    return 0;
}