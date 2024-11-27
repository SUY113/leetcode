#include <iostream>
using namespace std;


  //Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Kiem tra danh sach rong
	if(list1 == NULL){
		return list2;
	}
	if(list2 == NULL){
		return list1;
	}
	// Gan nut dau tien
	ListNode* head;
	if(list1-> val < list2->val){
		head = list1;
		list1 = list1->next;
	}else{
		head = list2;
		list2 = list2->next;
	}
	//tao con tro p de duyet qua cac list
	ListNode* p;
	p = head;
	//noi cac nut nho hon vao head.
	while(list1 && list2){
		if(list1 -> val < list2 -> val){
		p->next = list1;
		list1 = list1->next;
	}else{
		p->next = list2;
		list2 = list2-> next;
	}
	p=p->next;	
	}
	if(list1 != NULL){
		p->next = list1;
	}else{
		p->next = list2;
	}
	return head;
	
};


    void printList(ListNode* head) {
        while (head) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
};


int main(){
  Solution solution;

    // Tạo danh sách liên kết 1: 1 -> 3 -> 5
    ListNode* list1 = new ListNode(1, new ListNode(3, new ListNode(5)));

    // Tạo danh sách liên kết 2: 2 -> 4 -> 6
    ListNode* list2 = new ListNode(2, new ListNode(4, new ListNode(6)));

    // Gọi hàm mergeTwoLists
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // In kết quả danh sách đã hợp nhất
    cout << "Merged List: ";
    solution.printList(mergedList);
	return 0;
}
