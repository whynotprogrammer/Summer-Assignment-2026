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
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int node = len-n+1;
        if(node == 0){
            return NULL;
        }
        else if(len == 1){
            return NULL;
        }
        else if(node == 1){
            temp = head;
            head = head->next;
            delete(temp);
        }
        else{
            temp = head;
            for(int i=0;i<node-2;i++){
                temp = temp->next;
            }
            ListNode* next = temp->next;
            temp->next = next->next;
            delete(next);
        }
        return head;
    }
};
