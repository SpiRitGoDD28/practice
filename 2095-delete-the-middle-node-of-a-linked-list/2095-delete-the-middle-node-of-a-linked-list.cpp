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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        //Brute force
        /*ListNode* temp=head;
            int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid=(count/2);
        temp=head;
        while(temp!=NULL){
            mid--;
            if(mid==0){
                ListNode* delNode=temp->next;
                temp->next=temp->next->next;
                delete delNode;
                break;
            }
            temp=temp->next;
        }
        return head;*/
        //Modified Hare and tortoise
        ListNode* fast=head;
        ListNode* slow=head;
        fast=fast->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* delNode=slow->next;
        slow->next=slow->next->next;
        delete delNode;
        return head;
    }
};