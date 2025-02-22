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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* node1 = head->next;
        ListNode* node2 = node1;
        while (node2 != nullptr) {
            int sum = 0;
            while (node2->val != 0) {
                sum += node2->val;
                node2 = node2->next;
            }
            node1->val = sum;
            node2 = node2->next;
            node1->next = node2;
            node1 = node1->next;
        }
        return head->next;
    }
};