/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Iterative Approach
        ListNode* merged = new ListNode();
        ListNode* ptr = merged;

        while(list1 !=nullptr && list2 != nullptr){

            if(list1->val >= list2->val){
                merged->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            else{
                merged->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            merged = merged->next;
        }

        if(list1 == nullptr){
            merged->next = list2;
        }
        else{
            merged->next = list1;
        }
        return ptr->next;

    }

};