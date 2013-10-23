#ifndef LL_FUNCS_H_
#define LL_FUNCS_H_
typedef struct node {
    int data;
    struct node* next;
} node_t;

//makes a node with data and puts it at the head
node_t *Push(node_t **h, int data);
//builds a basic linked list
node_t *BuildOneTwoThree(); 
//returns the length of the linked list
int Length(node_t *head);

int Count(node_t *head, int searchFor);
int GetNth(node_t *head, int index);
void DeleteList(node_t **headRef);
void DeleteNode(node_t **headRef, int data);
#endif

