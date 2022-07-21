
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int p = 1;
        ListNode* headcopy = head;
        ListNode* left_before = nullptr;
        while (p < left) {
            left_before = head;
            head = head -> next;
            p++;
        }
        vector<ListNode*> list;
        while (p <= right) {
            list.push_back(head);
            head = head -> next;
            p++;
        }
        ListNode* right_after = head;
        for (int i = list.size() - 1; i > 0; i--) {
            list[i] -> next = list[i - 1];
        }
        list[0] -> next = right_after;
        if(left_before) {
            left_before -> next = list.back();
            return headcopy;
        }
        return list.back();
    }
};
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode*reverse(ListNode*&start, ListNode*&last){
//         ListNode*forw = start;
//         ListNode*curr = start;
//         ListNode*dummy = NULL;
//         while(forw!=NULL){
//             forw = forw->next;
//             curr ->next = dummy;
//             dummy = curr;
//             curr = forw;
//         }
//         cout<<dummy->val;
//         return dummy;
//     }
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode*start = head;
//         ListNode*last = head;
//         ListNode*connect = head;
//         int pos = 1;
//         int found1 = 0;
//         int found2 = 0;
//         while(last->val!=right){
//             if(start->val ==left && found1==0)found1=pos;
//             if(last->val ==right && found2==0)found2=pos;
//             if(found1>0&&found2>0)break;
//             if(start->next->val==left)connect = start;
//             if(found1<1)start = start->next;
//             if(found2<1)last = last->next;
//         }
        
//         connect->next = last->next;
//         reverse(start, last);
//         // last->next = connect->next;
//         // connect->next = start;
//         return NULL;
//     }
// };