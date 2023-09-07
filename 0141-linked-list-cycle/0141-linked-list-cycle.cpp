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
    // -- First solutiom --
    // bool hasCycle(ListNode *head) {
    //     unordered_set<ListNode*> attended;

    //     while (head) {
    //         if (attended.find(head) != attended.end()) {
    //             return true;
    //         }

    //         attended.insert(head);
    //         head = head->next;
    //     }
    //     return false;
    // }
    // Time complexity - O(n)
    // Space complexity - O(n)

// -- Second solution --
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head; 

        if (!head) {
            return false;
        }

        while (slow->next && slow && fast && fast->next) {
            if (fast->next == slow) {
                return true;
            }

            if (fast->next) {
                fast = fast->next->next;
            }


            slow = slow->next;
        }
        return false;
    }
};  // Time complexity - O(n)
    // Space complexity - O(1)