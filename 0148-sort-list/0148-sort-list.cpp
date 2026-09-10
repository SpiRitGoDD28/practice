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
    ListNode* middleNode(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergeSort(ListNode* left, ListNode* right){
        ListNode* dNode= new ListNode (-1);
        ListNode* temp=dNode;
        ListNode* t1=left;
        ListNode* t2=right;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        if(t1!=NULL) temp->next=t1;
        else temp->next=t2;
        return dNode->next;
    }
    ListNode* sortList(ListNode* head) {
        /*if(head==NULL) return NULL;
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;*/
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* leftHead=head;
        ListNode* middle=middleNode(head);
        ListNode* rightHead=middle->next;
        middle->next=nullptr;
        
        leftHead=sortList(leftHead);
        rightHead=sortList(rightHead);
        return mergeSort(leftHead, rightHead);

    }
};