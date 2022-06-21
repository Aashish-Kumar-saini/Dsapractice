class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp =head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp = temp ->next;
        }
        
        if(count==1)
            return head;
      
            count = count/2;
        int i=0;
        temp = head;
        while(i<count)
        {
            temp = temp ->next;
            i++;
        }
        return temp;
    }
};
