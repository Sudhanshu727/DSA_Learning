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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0; 
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode* front= head;
        ListNode* back= head;
        for (int i=1; i<k;i++){
            front= front->next;
        }
        for(int i=1; i<=n-k; i++){
            back= back->next;
        }
        swap(front->val, back->val);
        return head;
    }
};