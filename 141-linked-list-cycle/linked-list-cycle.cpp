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
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
            return false;
        }else if(head->next == head){
            return true;
        }else{
            ListNode* slow = head;
            ListNode* fast = head;
            while(fast && slow && fast->next){
                slow = slow->next;
                fast = fast->next->next;
                if(slow == fast){
                    return true;
                }
            }
            return false;
        }
        
        
    }
};