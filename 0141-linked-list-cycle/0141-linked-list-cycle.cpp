/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> attended;

        while (head) {
            if (attended.find(head) != attended.end()) {
                return true;
            }

            attended.insert(head);
            head = head->next;
        }
        return false;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)