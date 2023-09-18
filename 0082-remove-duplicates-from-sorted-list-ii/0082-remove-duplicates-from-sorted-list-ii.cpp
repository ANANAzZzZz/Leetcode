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
        unordered_set<int> removalList;
        
        if (!head) {
            return nullptr;
        }

        ListNode* curr = head;
        while (curr->next && curr->next) {
            if (curr->val == curr->next->val) {
                int forbiddenVal = curr->val;
                removalList.insert(forbiddenVal);
            }
            curr = curr->next;
        }

        while (removalList.find(head->val) != removalList.end()) {
            if (head && head->next) {
                head = head->next;
            } else {
                return nullptr;
            }       
        }

        curr = head;
        while (curr->next) {
            if (removalList.find(curr->next->val) != removalList.end()) {
                curr->next = curr->next->next;
                continue;
            }
            curr = curr->next;
        }
        return head;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)