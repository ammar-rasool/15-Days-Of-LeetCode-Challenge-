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
    ListNode* swapPairs(ListNode* head) {
        vector<ListNode*> nodes;
        if(head == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        while(temp){
            nodes.emplace_back(temp);
            temp = temp->next;
        }
        if(nodes.size() == 1){
            return head;
        }
        for (int i = 0; i < nodes.size(); i += 2){
            if (i + 1 < nodes.size()){
                ListNode * temp = nodes[i];
                nodes[i] = nodes[i + 1];
                nodes[i + 1] = temp;
            }
        }
        ListNode* first = nodes[0];
        ListNode* last = first;
        for (int i = 1; i < nodes.size(); i++){
            last->next = nodes[i];
            last = last->next;
            last->next = nullptr;
        }
        return first;

    }
};