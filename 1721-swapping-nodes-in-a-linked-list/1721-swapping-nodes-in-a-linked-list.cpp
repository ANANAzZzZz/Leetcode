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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* end = head;
        ListNode* begin = head;
  
        for (int i = 0; i < k - 1; i++) {
            fast = fast->next;
            begin = begin->next;
        }
  
        while (fast && fast->next) {
            fast = fast->next;
            end = end->next;
        }

        swap(begin->val, end->val);
        return head;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)