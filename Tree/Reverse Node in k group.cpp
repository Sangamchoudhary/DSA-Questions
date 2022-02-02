Ques --> https://leetcode.com/problems/reverse-nodes-in-k-group/

--> solve 1 layer and rest will be solved by recursion 

class Solution {
public:
    ListNode* solve(ListNode* head,int k,int &c,int length){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head->next;
        int count = 0;
        
        while(curr != NULL and count < k){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            count++;
            c++;
        }
        
        if(Next != NULL and (length - c) >= k){
            head->next = solve(Next,k,c,length);
        }else{
            head->next = curr;
        }
        
        return prev;        
    }
    ListNode* reverseKGroup(ListNode* head, int k){
        int length = 0;
        ListNode* temp = head;
        
        while(temp){
            temp = temp->next; length++;
        }
        
        int c = 0;
        return solve(head,k,c,length);
    }
};