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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next){
            return head;
        }else{
            vector<ListNode*> node;
            ListNode* temp = head;
            while(temp != nullptr){
                node.emplace_back(temp);
                temp = temp->next;
            }
            int jump = k;
            int remaining = node.size();
            auto start = node.begin();
            while(remaining >= k){
                reverse(start, node.begin() + jump);
                remaining = node.size() - jump;
                start += k;
                jump += k;
                
            }
            temp = new ListNode(0);
            head = temp;
            for (int i = 0; i < node.size(); i++){
                temp->next = node[i];
                temp = temp->next;
                temp->next = nullptr;
            }
            return head->next;
        }
    }
};