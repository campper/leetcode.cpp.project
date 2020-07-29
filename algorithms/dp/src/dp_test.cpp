/**
 *
 * 动态规划思想： 把复杂问题分解为若干小问题。用小问题的解逐步推导出大问题的解
 * sample problem:最长递增子序列问题
 **/
#include <iostream>
using namespace std;


int get_list(int a[],int b[],int length)
{
  int max = a[0];
  for(int i=1;i<length;i++)
  {
    bool big = false;
    if(a[i]>max)
    {
      max = a[i];
      big = true;
    }

    if(big)
    {
      b[i] = b[i-1]+1;
    }
    else
    {
      b[i] = b[i-1];
    }
  }
  return b[length-1];
}

int main(void){
  int a[8] = {5,6,7,1,2,8,3,10};
  int b[8] = {1,1,1,1,1,1,1,1};

  int max = get_list(a,b,8);
  std::cout<<max<<std::endl;

  return 0;
}
