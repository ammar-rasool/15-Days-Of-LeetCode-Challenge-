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
//    void insert_node(ListNode* head, ListNode* tail, int data){
//         ListNode* n = new ListNode();
//         n->val = data;
//         if (head == nullptr){
//             head = tail = n;
//         }else{
//             tail->next = n;
//             tail = n;
//         }
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int carry = 0;
//        int sum = 0;
//        ListNode* l3_head = nullptr;
//        ListNode* l3_tail = nullptr;
//         while(l1 != nullptr && l2 != nullptr){
//             sum = l1->val + l2->val + carry;
//             carry = sum / 10;
//             sum = sum % 10;
//             insert_node(l3_head, l3_tail, sum);
//             l1 = l1->next;
//             l2 = l2->next;
//         }
//         if(l1 == nullptr){
//             while(l2 != nullptr){
//                 sum = l2->val + carry;
//                 carry = sum / 10;
//                 sum = sum % 10;
//                 insert_node(l3_head, l3_tail, sum);
//                 l2 = l2->next;
//             }
//         }else{
//             while(l1 != nullptr){
//                 sum = l1->val + carry;
//                 carry = sum / 10;
//                 sum = sum % 10;
//                 insert_node(l3_head, l3_tail, sum);
//                 l1 = l1->next;
//             }
//         }
//         return l3_head;
//     }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry = 0;
       int sum = 0;
       sum = l1->val + l2->val + carry;
        carry = sum / 10;
        sum = sum % 10;
       ListNode* l3_tail = new ListNode(sum);
       ListNode* l3_head = l3_tail;
       l1 = l1->next;
       l2 = l2->next;
    //    ListNode* n;
        while(l1 != nullptr || l2 != nullptr){
            if(l1 == nullptr){
                sum = l2->val + carry;
                carry = sum / 10;
                sum = sum % 10;
                l2 = l2->next;
            }else if(l2 == nullptr){
                sum = l1->val + carry;
                carry = sum / 10;
                sum = sum % 10;    
                l1 = l1->next;
            }else{
                sum = l1->val + l2->val + carry;
                carry = sum / 10;
                sum = sum % 10;
                l1 = l1->next;
                l2 = l2->next;
            }
            l3_tail->next = new ListNode(sum);
            l3_tail = l3_tail->next;
            
        }if (carry > 0){
            l3_tail->next = new ListNode(carry);
            l3_tail = l3_tail->next;
        }
        return l3_head;
    }
};