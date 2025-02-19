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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur = head;
        ListNode* cur2 = head->next;
        while(cur2){
            int smallest = min(cur->val , cur2->val);
            while (smallest)
            {
                if(cur->val % smallest == 0 && cur2->val % smallest == 0){
                    ListNode* newNode = new ListNode(smallest);
                    newNode->next = cur2;
                    cur->next = newNode;
                    break;
                }
                smallest--;
            }
            cur = cur->next->next;
            cur2 = cur2->next;
        }
        return head;
    }
};