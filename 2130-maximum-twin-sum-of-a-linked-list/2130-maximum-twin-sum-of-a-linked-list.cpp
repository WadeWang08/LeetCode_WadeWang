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
    int pairSum(ListNode* head) {
        if (head->next->next == nullptr) {
            return (head->val + head->next->val);
        }
        ListNode* slow = head;
        ListNode* pre = nullptr;
        ListNode* fast = head;

        while (fast != nullptr) {
            fast = fast->next->next;
            ListNode* nex = slow->next;
            slow->next = pre;
            pre = slow;
            slow = nex;
        }
        int cur_max = 0;
        while (pre != nullptr) {
            int twin = pre->val + slow->val;
            if (twin > cur_max) {cur_max = twin;}
            pre = pre->next;
            slow = slow->next;
        }
        return cur_max;
    }
};