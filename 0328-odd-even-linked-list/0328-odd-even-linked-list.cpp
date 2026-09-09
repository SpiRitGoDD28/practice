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
    ListNode* oddEvenList(ListNode* head) {
        /*vector<int>arr;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL){
            return head;
        }//odd
        while(temp!=NULL){
            arr.push_back(temp->val);
            if(temp->next==NULL) break;
            temp=temp->next->next;
        }
        //even
        temp=head->next;
        while(temp!=NULL){
            arr.push_back(temp->val);
            if(temp->next==NULL) break;
            temp=temp->next->next;
        }
        
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;*/
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead=head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;
    }
};