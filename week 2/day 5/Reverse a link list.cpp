class Solution {
public:
ListNode* ans;
void fun(ListNode* node){
    if(node == NULL or node -> next == NULL){
        ans = node;
        return;
    }
    else{
        fun(node -> next);
        (node -> next) -> next = node;
        node -> next = NULL;
    }
}
    ListNode* reverseList(ListNode* head) {
        fun(head);
        return ans;
    }
};