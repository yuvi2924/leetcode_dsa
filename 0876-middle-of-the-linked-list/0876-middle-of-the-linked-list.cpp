class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *t=head;
        int count=0;
        while(t!=NULL)
{
    count++;
    t=t->next;
}        
t=head;

     for (int i = 0; i < count / 2; i++) {
            t = t->next;
        }
   return  t;
    }
};