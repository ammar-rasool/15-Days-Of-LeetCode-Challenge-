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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // cleaning vector
        for(auto it = lists.begin(); it < lists.end(); ){
            if (*it == nullptr){
                it = lists.erase(it);
            }else{
                it++;
            }
        }
        if(lists.size() == 0){
            return nullptr;
        }else if(lists.size() == 1){
            return lists[0];
        }
        else{
            ListNode* last = lists[0];
            ListNode* first = lists[0]; 
            int count = 1;
            for(int i = 1; i < lists.size(); i++){
                    while(last->next != nullptr){
                        last = last->next;
                        count++;
                    }
                    ListNode* temp = lists[i];
                    last->next = temp;
            }
            for(int i = 1; i <= count; i++){
                ListNode* temp = first;
                while(temp != nullptr){
                    if (temp->next != nullptr){
                        if(temp->val > temp->next->val){
                            int temp_data = temp->val;
                            temp->val = temp->next->val;
                            temp->next->val = temp_data;
                        }
                    }
                    temp = temp->next;
                }
            }
            return first;    
        }
        
    }
};