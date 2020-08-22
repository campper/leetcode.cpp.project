/* ===== 冒泡排序算法 ===== */
#include <iostream>
using namespace std;

void bubbleSort(int *list,int index)
{
    int temp;
    for(int i=0;i<=index;i++)
    {
        for(int j=0;j<index-1;j++)
        {
            if(list[j]>list[j+1])
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1]=temp;
            }
        }

    }
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
    //冒泡排序
    bubbleSort(list,index);
    
    //打印结果
    std::cout<<"\n　Final sorting result:\n";
    for(int i=0;i<index;i++){
        std::cout<<list[i]<<std::endl;
    }
    return 0;
}