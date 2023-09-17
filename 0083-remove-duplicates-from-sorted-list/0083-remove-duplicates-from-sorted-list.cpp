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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return nullptr;
        }
        
        for (ListNode* curr = head; curr->next; curr = curr->next) {
            while (curr->val == curr->next->val) {
                if (!curr->next->next) {
                    curr->next = nullptr;
                    return head;
                }
                curr->next = curr->next->next;
            }
        }
        return head;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(1)