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
        int num1, num2;
      

        ListNode* temp = new ListNode(0);
        ListNode* temp1 = temp;
        //num1 and num2 ko trenary say value do if null hai too num1 ki val
        int carry = 0;
        while((l1 !=NULL) || (l2!= NULL) || (carry != 0) ){
            num1 = l1 != NULL ?l1->val :0;
            num2 = l2 != NULL ?l2->val :0;

            int sum = num1 + num2+ carry;
            int digit = sum%10;
             carry = sum / 10;
            ListNode *ptr =  new ListNode(digit);
            temp1->next = ptr;
            temp1 = temp1->next;
            l1= l1!=NULL?l1->next:NULL;
             l2 = l2!=NULL?l2->next:NULL;
            
        }
        return temp->next;
        
        
    }
};