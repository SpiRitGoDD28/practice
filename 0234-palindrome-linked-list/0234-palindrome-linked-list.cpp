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
    ListNode* reverseList(ListNode* head){
        /*ListNode* current=head;
        stack<int> st;
        while(current!=NULL){
            st.push(current->val);
            current=current->next;
        }
        current=head;
        while(current!=NULL){
            current->val=st.top();
            st.pop();
            current=current->next;
        }
        return head;*/
        ListNode* temp=head;
        ListNode* newHead=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=newHead;
            newHead=temp;
            temp=front;
        }
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL){
                slow=slow->next;
        }
        ListNode* newHead=reverseList(slow);
        while(newHead!=NULL){
            if(head->val!=newHead->val){
                return false;
            }
            head=head->next;
            newHead=newHead->next;
        }
        
        return true;
    }
};