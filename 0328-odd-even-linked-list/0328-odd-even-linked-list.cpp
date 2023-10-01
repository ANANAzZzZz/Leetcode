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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        
        ListNode* evenNode = head;
        ListNode* od = head->next;
        ListNode* oddNode = head->next;
        ListNode* tmp = head;

        while (tmp->next && tmp->next->next) {
            evenNode->next = tmp->next->next;
            evenNode = evenNode->next;

            oddNode->next = tmp->next->next;
            oddNode = oddNode->next;
            
            tmp = tmp->next;
        }
        evenNode->next = od;

        return head;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)