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
      
 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
           // Find the length of the linked list
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // If the head node needs to be deleted
        if (n == count) {
            // ListNode* del = head;
            // head = head->next;
            // delete del;
            return head->next;
        }

        // Move to the node before the one to delete
        temp = head;
        for (int i = 1; i < count - n; i++) {
            temp = temp->next;
        }

        // Delete the nth node from the end
        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return head;
    }

};