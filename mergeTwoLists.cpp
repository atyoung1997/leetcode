#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode dummy{ ListNode(0) };
	ListNode curr{ dummy };

	if (l1 == NULL);


	return dummy.next;
}

int main() {
	cout << __cplusplus;
	return 0;
}
