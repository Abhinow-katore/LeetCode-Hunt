/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        // ListNode *curr = headA;
        int len1=0;
        int len2=0;
        while(temp1!=NULL ){
            if(temp1!=NULL){
                temp1 = temp1->next;
                len1++;
            }

        }
        while(temp2!=NULL ){
            if(temp2!=NULL){
                temp2 = temp2->next;
                len2++;
            }

        }
        ListNode *a = headA;
        ListNode *b = headB;
        int val1 = max(len1,len2);
        int val2 = min(len1,len2);
        if(len1>len2){
            for(int i = 0; i <len1-len2;i++){
                a = a->next;
            }
        }
        if(len1<len2){
            for(int i = 0; i <len2-len1;i++){
                b = b->next;
            }
        }
        cout<<a->val<<" "<<b->val;
        while(true){
            if(a==b)return a;
            else{
                a = a->next;
                b = b->next;
            }
        }
        
        return 0;
        
    }
};