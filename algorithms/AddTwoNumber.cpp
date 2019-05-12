/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Solution
 * 我们可以看到这道题的最高位在链表首位置，如果我们给链表翻转一下的话就跟之前的题目一样了，这里我们来看一些不修改链表顺序的方法。
 * 由于加法需要从最低位开始运算，而最低位在链表末尾，链表只能从前往后遍历，没法取到前面的元素，那怎么办呢？
 * 我们可以利用栈来保存所有的元素，然后利用栈的后进先出的特点就可以从后往前取数字了。
 * step 1. 遍历两个链表，将所有数字分别压入两个栈s1和s2中，我们建立一个值为0的res节点;
 * step 2. 开始循环，如果栈不为空，则将栈顶数字加入sum中;
 * step 3. 然后将res节点值赋为sum%10;
 * step 4. 新建一个进位节点head，赋值为sum/10，如果没有进位，那么就是0，然后我们head后面连上res，将res指向head。
 * 这样循环退出后，我们只要看res的值是否为0，为0返回res->next，不为0则返回res即可
 */
#include <stdio.h>
#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution {
public:
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};
public:

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *dummy = new ListNode(-1);
		ListNode *cur = dummy;
		int carry = 0; //进位标志
		while (l1 || l2) {	//判断两个链表是否为空，有一个不为空，即继续执行
			int val1 = l1 ? l1->val : 0;	//取当前链表的值
			int val2 = l2 ? l2->val : 0;	//取当前链表的值
			int sum = val1 + val2 + carry;	//值相加，并进位
			carry = sum / 10;				//取进位符号，如果
			cur->next = new ListNode(sum % 10);	//当前相加的值推入链表的下一节点
			cur = cur->next;
			if (l1) l1 = l1->next;
			if (l2) l2 = l2->next;
		}

		if (carry) cur->next = new ListNode(1);
		return dummy->next;
	}
	/*ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		stack<int> s1, s2;
		while (l1) {
			s1.push(l1->val);
			l1 = l1->next;
		}

		while (l2) {
			s2.push(l2->val);
			l2 = l2->next;
		}
		int sum = 0;
		ListNode *res = new ListNode(-1);

		while (!s1.empty() || !s2.empty()) {
			if (!s1.empty()) { sum += s1.top(); s1.pop(); }
			if (!s2.empty()) { sum += s2.top(); s2.pop(); }
			res->val = sum % 10;
			ListNode *head = new ListNode(sum / 10);
			head->next = res;
			res = head;
			sum /= 10;
		}

		ListNode *del0res = new ListNode(-1);
		if (res->val == 0) {
			del0res =res->next;
		}
		else {
			del0res = res;
		}
		ListNode *rres = listReverse(del0res);
		return rres;
		
	}*/

	ListNode *listReverse(ListNode *pHead) {
		if (pHead == NULL) {
			return NULL;
		}
		ListNode *pCurrent, *pPre, *pNext;
		pPre = pHead;
		pCurrent = pPre->next;
		while (pCurrent) {
			pNext = pCurrent->next;
			pCurrent->next = pPre;
			pPre = pCurrent;
			pCurrent = pNext;
		}
		pHead->next = NULL;
		pHead = pPre;
		return pHead;
	}
};

void trimLeftTrailingSpaces(string &input) {
	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
		return !isspace(ch);
	}));
}

void trimRightTrailingSpaces(string &input) {
	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
		return !isspace(ch);
	}).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
	vector<int> output;
	trimLeftTrailingSpaces(input);
	trimRightTrailingSpaces(input);
	input = input.substr(1, input.length() - 2);
	stringstream ss;
	ss.str(input);
	string item;
	char delim = ',';
	while (getline(ss, item, delim)) {
		output.push_back(stoi(item));
	}
	return output;
}

Solution::ListNode* stringToListNode(string input) {
	// Generate list from the input
	vector<int> list = stringToIntegerVector(input);

	// Now convert that list into linked list
	Solution::ListNode* dummyRoot = new Solution::ListNode(0);
	Solution::ListNode* ptr = dummyRoot;
	for (int item : list) {
		ptr->next = new Solution::ListNode(item);
		ptr = ptr->next;
	}
	ptr = dummyRoot->next;
	delete dummyRoot;
	return ptr;
}

string listNodeToString(Solution::ListNode* node) {
	if (node == nullptr) {
		return "[]";
	}

	string result;
	while (node) {
		result += to_string(node->val) + ", ";
		node = node->next;
	}
	return "[" + result.substr(0, result.length() - 2) + "]";
}

//int main() {
//	string line;
//	while (getline(cin, line)) {
//		Solution::ListNode* l1 = stringToListNode(line);
//		getline(cin, line);
//		Solution::ListNode* l2 = stringToListNode(line);
//
//		Solution::ListNode* ret = Solution().addTwoNumbers(l1, l2);
//
//		string out = listNodeToString(ret);
//		cout << out << endl;
//	}
//	return 0;
//}