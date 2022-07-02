#include <iostream>
using namespace std;

//test
template <typename T>
inline T const& Max(T const& a, T const& b)
{
	return a < b ? b : a;
}

struct ListNode {
	int val_;
	ListNode *next_;
	ListNode(int val) :val_(val),next_(NULL) {

	}
};

