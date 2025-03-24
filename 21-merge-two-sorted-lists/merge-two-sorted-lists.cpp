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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* last1;
        ListNode* last2;
        if(list1 != nullptr && list2 != nullptr){
            last2 = list2;
            last1 = list1;
        }else if(list2 == nullptr){
            return list1;
        }else if(list1 == nullptr){
            return list2;
        }else{
            return nullptr;
        }
        int no_of_nodes = 1;
        while(last1->next != nullptr || last2->next != nullptr){
            // last = last->next;
            if(last1->next != nullptr){
                last1 = last1->next;
                no_of_nodes++;
            }else if(last2->next != nullptr){
                last2 = last2->next;
                no_of_nodes++;
            }
        }
        last1->next = list2;
        
        for (int i = 1; i <= no_of_nodes; i++){
            ListNode* temp = list1;
            while(temp != nullptr){
                if(temp->next != nullptr){
                    if(temp->val > temp->next->val){
                        int temp_data = temp->val;
                        temp->val = temp->next->val;
                        temp->next->val = temp_data;
                    }
                }
                
                temp = temp->next;
            }
        }
        return list1;
    }
};