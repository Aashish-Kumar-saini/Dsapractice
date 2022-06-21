SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

if(llist==NULL)
{
  llist = new SinglyLinkedListNode(data);
    
}
else{
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
temp -> next=llist;
llist = temp;
}
return llist;


}
