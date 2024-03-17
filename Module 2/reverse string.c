struct Node {
  char data;
  struct Node* next;
};

struct Stack {
  struct Node* top;
};

struct Node* newNode(char data);
struct Stack* createStack();
int isEmpty(struct Stack* stack);
void push(struct Stack* stack, char data);
char pop(struct Stack* stack);
char peek(struct Stack* stack);


void reverseString(char* str) {
  struct Stack* stack = createStack();
  for (char* ptr = str; *ptr != '\0'; ptr++) {
      push(stack, *ptr);
  }
  for (char* ptr = str; !isEmpty(stack); ptr++) {
      *ptr = pop(stack);
  }
  free(stack);
}
