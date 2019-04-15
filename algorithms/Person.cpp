#include <iostream>
#include "Person.h"
using namespace algorithms;

Person::Person()
{

}

Person::Person(char* name) :name_(name) {

}

Person::~Person() {

}

char* Person::getName() const
{
	return name_;
}

void Person::setName(char* name) {
	name_ = name;
}

//int main(void){
//	char tmp[] = "campper";
//	char* name = tmp;
//	Person *p = new Person;
//    p->setName(name);
//	std::cout << p->getName() << std::endl;
//    //std::cout<<p.getName()<<std::endl;
//	delete p;
//	system("pause");
//    return 0;
//}