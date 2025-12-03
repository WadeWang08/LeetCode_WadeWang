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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* cur = head;
        int n = 0;
        while (cur != nullptr) {
            n++;
            cur = cur->next;
        }
        if (n == 1) {
            return nullptr;
        }
        int middle = n / 2;
        cur = head;
        for (int i = 0; i < middle - 1; i++) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return head;
    }
};