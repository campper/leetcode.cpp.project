/* ===== 冒泡排序算法 ===== */
/*
 * 算法思想:两次遍历数组，第一次获取每个元素，然后将获取的当前元素与下一个元素比较大小
 */
#include <iostream>
using namespace std;

void BubbleSort(int *list,int index)
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
    int *p = &list[1];

    std::cout<<"\n Please input the values you want to sort(Exit for 0):\n"<<std::endl;
    index = 0;

    //读取数值存到数组中
    std::cin>>node;
    while(node != 0){
        list[index] = node;
        index++;
        std::cin>>node;
    }
    std::cout<<*(p+1)<<std::endl;
    //冒泡排序
    BubbleSort(list,index);
    
    //打印结果
    std::cout<<"\n　Final sorting result:\n";
    for(int i=0;i<index;i++){
        std::cout<<list[i]<<std::endl;
    }
    return 0;
}
