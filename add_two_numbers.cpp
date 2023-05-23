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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0); 
        ListNode* temp = head;
        int carry = 0;
        int sum;
        while(l1!=NULL || l2!=NULL || carry){
            sum = 0;
            if(l1!=NULL){
                sum += l1->val;  
                l1 = l1->next;   // point to next node in l1
            }
            if(l2!=NULL){
                sum +=l2->val;
                l2 = l2->next; // point to next node in l1
            }
            sum = sum + carry;
            (sum>9)? carry = 1 :carry = 0;

            ListNode* newnode = new ListNode(sum%10);
            temp->next = newnode;
            temp = newnode;
            

        }
        return head->next;



    }
};