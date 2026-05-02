class Solution {
public:
    static bool hasCycle(ListNode *head) {
        ListNode* goSlow = head;
        ListNode* goFast = head;
        while(goFast && goFast->next)
        {
            goSlow = goSlow->next;
            goFast = goFast->next->next;
            if(goFast == goSlow) return true;
        }
        
        return false;

    }
};