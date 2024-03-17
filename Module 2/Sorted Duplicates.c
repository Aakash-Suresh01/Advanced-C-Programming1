struct node
{
  int data;
  struct node* next;
};

void removeduplicate(struct node* head){
  struct node* current = head;

  while (current != NULL && current->next != NULL) {
    if (current->data == current->next->data) {
      struct node* duplicate = current->next;
      current->next = duplicate->next;
      free(duplicate);
    } else {
      current = current->next;
    }
  }
}
