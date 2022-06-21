class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
       int count=0;
        ListNode *temp = head;
        while(temp!=NULL)
        {
           count++;
            temp = temp->next;
        }
         temp = head;
   
      count--;
        while(temp!=NULL)
     {
            ans += (temp->val) * pow(2,count);
            
           temp = temp->next;
            count--;
        }
        
       
        return ans;
    }
};
