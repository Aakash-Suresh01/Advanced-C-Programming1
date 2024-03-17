struct node
{
  int data;
  struct node* next;
  struct node* prev;
};

struct node* insert(struct node* Headnode){
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node));
  if (temp == NULL) {
    printf("Memory allocation failed.\n");
    exit(1);
  }

  printf("Enter node data: ");
  scanf("%d",&temp->data); 
  temp->next = NULL;
  temp->prev = NULL;

  if(Headnode==NULL){
    Headnode = temp;
    Headnode->prev = NULL;
    Headnode->next = NULL;
  }
  else{
    struct node* ptr = Headnode;
    while (ptr->next != NULL && temp->data > ptr->data) {
      ptr = ptr->next;
    }

    if(ptr == Headnode){
      temp->next = ptr;
      ptr->prev = temp;
      Headnode = temp;
    }
    else if(ptr->next ==  NULL && temp->data >= ptr->data){
      ptr->next = temp;
      temp->prev = ptr;
    }
    else{
    ptr->prev->next =temp;
    temp->prev = ptr->prev;
    ptr->prev = temp;
    temp-> next = ptr;
    }
  }
  return Headnode;
}
