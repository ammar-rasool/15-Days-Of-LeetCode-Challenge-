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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        vector<int> data;
        ListNode* temp = head;
        while(temp != nullptr){
            data.emplace_back(temp->val);
            temp = temp->next;
        }
        reverse(data.begin(), data.end());
        temp = head;
        for(int i = 0; i < data.size(); i++){
            if(data[i] != temp->val)
                return false;
            temp = temp->next;
        }
        return true;
    }
};