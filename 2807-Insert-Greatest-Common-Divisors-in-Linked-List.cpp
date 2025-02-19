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
            int gcd = __gcd(cur->val, cur2->val);
            ListNode* newNode = new ListNode(gcd);
            cur->next = newNode;
            newNode->next = cur2;
            cur = cur2;
            cur2 = cur2->next;
        }
        return head;
    }
};