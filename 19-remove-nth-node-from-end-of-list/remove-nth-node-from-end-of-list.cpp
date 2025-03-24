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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* front = head;
        int count = 0;
        //Used to count the total number of nodes;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
        
        int counter = 1; 
        if(n == count){
            temp = head;
            head = head->next;
            delete (temp);
            return head;
        }else{
            count = count - n + 1;
            while(counter < count){
                prev = front;
                front = front->next;
                counter++;
            } 
            prev->next = front->next;
            delete(front);
            return head;
        }      
        
    }
};