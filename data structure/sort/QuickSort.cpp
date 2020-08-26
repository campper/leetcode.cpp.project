/*
 * 快速排序
 */

#include<iostream>
using namespace std;

void QuickSort(int* list,int left,int right,int index)
{

}

int main()
{
    int list[20];
    int i,index;
    int node;

    std::cout<<"\n Please input the values you want to sort(Exit for 0):\n"<<std::endl;
    index = 0;

    //读取数值存到数组中
    std::cin>>node;
    while(node != 0){
        list[index] = node;
        index++;
        std::cin>>node;
    }
    std::cout<<index<<std::endl;
    std::cout<<&list<<std::endl;
    //冒泡排序
    QuickSort(list,0,index-1,index);
    
    //打印结果
    std::cout<<"\n　Final sorting result:\n";
    for(int i=0;i<index;i++){
        std::cout<<list[i]<<std::endl;
    }
    return 0;
}