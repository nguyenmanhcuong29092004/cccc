Node* addLastNode(Node *head, int x)
{
  Node*p=new Node;
  p->value=x;
  p->nextNode=NULL;
  if(head==NULL) head =p;
  else{Node*k=new Node;
     for(k=head;k!=NULL;k=k->nextNode){
         if(k->nextNode==NULL){
             k->nextNode=p;
             k=p;
         }
     }
  }
return head;
}
