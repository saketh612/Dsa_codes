class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode*reverse_head = reverseList(head->next);
        head->next->next =head;
        head->next = NULL;
        return reverse_head;
    }

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL,*curr = head,*n = head->next;
        while(curr!=NULL)
        {
            curr->next = prev;
            prev=c;
            c=n;
            if (n!=NULL)
            {
               n=n->next;
            }
        }
        return prev;
    }
};