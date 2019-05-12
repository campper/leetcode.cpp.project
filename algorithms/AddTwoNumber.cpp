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
 * ���ǿ��Կ������������λ��������λ�ã�������Ǹ�����תһ�µĻ��͸�֮ǰ����Ŀһ���ˣ�������������һЩ���޸�����˳��ķ�����
 * ���ڼӷ���Ҫ�����λ��ʼ���㣬�����λ������ĩβ������ֻ�ܴ�ǰ���������û��ȡ��ǰ���Ԫ�أ�����ô���أ�
 * ���ǿ�������ջ���������е�Ԫ�أ�Ȼ������ջ�ĺ���ȳ����ص�Ϳ��ԴӺ���ǰȡ�����ˡ�
 * step 1. ���������������������ֱַ�ѹ������ջs1��s2�У����ǽ���һ��ֵΪ0��res�ڵ�;
 * step 2. ��ʼѭ�������ջ��Ϊ�գ���ջ�����ּ���sum��;
 * step 3. Ȼ��res�ڵ�ֵ��Ϊsum%10;
 * step 4. �½�һ����λ�ڵ�head����ֵΪsum/10�����û�н�λ����ô����0��Ȼ������head��������res����resָ��head��
 * ����ѭ���˳�������ֻҪ��res��ֵ�Ƿ�Ϊ0��Ϊ0����res->next����Ϊ0�򷵻�res����
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
		int carry = 0; //��λ��־
		while (l1 || l2) {	//�ж����������Ƿ�Ϊ�գ���һ����Ϊ�գ�������ִ��
			int val1 = l1 ? l1->val : 0;	//ȡ��ǰ�����ֵ
			int val2 = l2 ? l2->val : 0;	//ȡ��ǰ�����ֵ
			int sum = val1 + val2 + carry;	//ֵ��ӣ�����λ
			carry = sum / 10;				//ȡ��λ���ţ����
			cur->next = new ListNode(sum % 10);	//��ǰ��ӵ�ֵ�����������һ�ڵ�
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