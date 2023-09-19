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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* ans = head->next;

        while (head && head->next) {
            ListNode* nextNode = head->next->next;
            
            if (prev) {    
                prev->next = head->next;
            }
            prev = head;


            head->next->next = head;
            head->next = nextNode;
            head = nextNode;
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)