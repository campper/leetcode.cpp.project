#include <iostream>
using namespace std;

//ģ��ѧϰ
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


int main() {
	ListNode *l1 = new ListNode(-1);
	if (l1) {
		cout << true << endl;
	}
	else {
		cout << false << endl;
	}
	return 0;
}

