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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* B = headB;
        ListNode* A = headA;

        while (B != nullptr) {
            if (A == B) {
                return B;
            }

            if (A && B) {
                A = A->next;
            } else {
                A = headA;
                B = B->next;
            }
        }
        return nullptr;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(n)