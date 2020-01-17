#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include<iostream>
namespace class_test
{
	class Customer
	{
	public:
		Customer() = delete;

		virtual ~Customer() {};
		void* operator new(std::size_t) = delete;
	};
}

#endif // _CUSTOMER_H_
