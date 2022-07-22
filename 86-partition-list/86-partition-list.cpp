// #pending
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        auto left = new ListNode(); //dummy node
        auto right = new ListNode(); //dummy node
        
        ListNode* l = left, *r = right;
        
        while(head){
            if(head->val < x){
                l->next = head;
                l = l->next;
            }
            else{
                r->next = head;
                r = r->next;
            }
            head = head->next;
        }
        l->next = right->next;
        r->next = NULL;
        
        return left->next;
    }
};