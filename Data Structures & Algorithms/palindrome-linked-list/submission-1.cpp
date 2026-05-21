class Solution {
public:
    static bool isPalindrome(ListNode *head) 
    {
        ListNode* goSlow = head;
        ListNode* goFast = head;
        while(goFast && goFast->next)
        {
            goSlow = goSlow->next;
            goFast = goFast->next->next;
        }
        
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(goSlow)
        {
            next = goSlow->next;
            goSlow->next = prev;
            prev = goSlow;
            goSlow = next;
        }
        while(head && prev)
        {
            if (head->val != prev->val)
                return (false);
            prev = prev->next;
            head = head->next;
        }
        return (true);

    }
};