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
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* iter = head->next->next;
        ListNode* estart = head->next;
        int swap = 0;

        while(iter != nullptr) {
            if (swap == 0) {
                odd->next = iter;
                odd = iter;
                swap++;
                iter = iter->next;
            } else {
                even->next = iter;
                even = iter;
                swap--;
                iter = iter->next;
            }
        }
        even -> next = nullptr;
        odd -> next = estart;
        return head;
    }
};