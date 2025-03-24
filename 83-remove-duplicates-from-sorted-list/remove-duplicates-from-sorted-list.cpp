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
            for(auto it = data.begin(); it + 1 < data.end();){
                
                    if(*it == *(it + 1)){
                        it = data.erase(it);
                    }else{
                        ++it;
                    }
                
            }
            ListNode* first = new ListNode(data[0]);
            ListNode* last = first;
            for(int i = 1; i < data.size(); i++){
                last->next = new ListNode(data[i]);
                last = last->next;
                // last->next = nullptr;
            }
            return first;
        }
    }
};