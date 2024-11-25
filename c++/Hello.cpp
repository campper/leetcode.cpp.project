#include <iostream>
using namespace std;

int main(){
	std::cout<<"hello world"<<std::endl;
	// if(0){
	// 	std::cout<<"move right"<<std::endl;
	// } else{
	// 	std::cout<<"move left"<<std::endl;
	// }
	
	// for(int a=1;a<=3;a++){
	// 	std::cout<<"move left\t"<<a<<std::endl;
	// 	for(int b=1;b<=5;b++){
	// 		std::cout<<"move up\t"<<b<<std::endl;
	// 	}
	// }
	int index = 1;
	int sum = 0;
	while(index <= 100){
		sum += index;
		std::cout<<index<<" "<<sum<<std::endl;
		index++;
	}
	std::cout<<sum<<std::endl;
	return 0;
}
