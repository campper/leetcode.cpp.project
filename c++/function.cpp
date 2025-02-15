#include <iostream>
using namespace std;

int function(int p,int q){
    std::cout<< "4*"<<q<<"-("<<p<<"+"<<q<<")/2 = ";
    return (4*q)-((p+q)/2);
}

int main(void)
{
    int p = 3;
    int q = function(4,6);
    std::cout<< q << std::endl;
    std::cout<<function(p,q)<<std::endl;
    return 0;
}