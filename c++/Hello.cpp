#include <iostream>
using namespace std;

int main(){
	std::cout<<"hello world"<<std::endl;
	for(int a=1;a<=3;a++){
		std::cout<<"move left\t"<<a<<std::endl;
		for(int b=1;b<=5;b++){
			std::cout<<"move up\t"<<b<<std::endl;
		}
	}
	return 0;
}
