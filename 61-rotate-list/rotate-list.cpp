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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        vector<int> data;
        ListNode* temp = head;
        while(temp != nullptr){
            data.emplace_back(temp->val);
            temp = temp->next;
        }
        k = k % data.size();
        for (int i = 0; i < k; i++){
            int last = data[data.size() - 1];
            for(int i = data.size() - 1; i >= 0; i--){
                if (i - 1 >= 0){
                    data[i] = data[i - 1];
                }else{
                    data[0] = last;
                }
            }
        }
        temp = new ListNode(0);
        head = temp;
        for (int i = 0; i < data.size(); i++){
            temp->next = new ListNode(data[i]);
            temp = temp->next;
        }
        return head->next;
        

        
    }
    // void rotate(vector<int> data, start, end){
    //     for(int i = start, i < end, i++){
    //         if (i + 1 < end){
    //             int temp = data[i];
    //             data[i] = data[i + 1];
    //             data[i + 1] = temp;
    //         }
    //     }
    // }
};