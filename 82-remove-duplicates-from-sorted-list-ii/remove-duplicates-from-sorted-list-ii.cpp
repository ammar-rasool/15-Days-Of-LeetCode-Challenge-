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
        if (head == nullptr || head->next == nullptr){
            return head;
        }else{
            vector<int>data;
            ListNode* temp = head;
            while(temp){
                data.emplace_back(temp->val);
                temp = temp->next;
            }
            
            map<int, int> um;
            for(int i = 0; i < data.size(); i++){
                um[data[i]]++;
            }
            vector<int> final_values;
            for(auto p : um){
                if (p.second == 1){
                    final_values.emplace_back(p.first);
                }
            }
            if(final_values.size() == 0){
                return nullptr;
            }
            ListNode* first = new ListNode(final_values[0]);
            ListNode* last = first;
            for(int i = 1; i < final_values.size(); i++){
                last->next = new ListNode(final_values[i]);
                last = last->next;
            }
            return first;
        }
    }
    
};