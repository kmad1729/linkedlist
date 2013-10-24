#include "ll_func.h"
#include <stdlib.h>
#include <assert.h>

node_t *Push(node_t **h, int data)
{
   node_t *new_node = malloc(sizeof(node_t));
   (new_node -> data) = data;
   (new_node -> next) = *h;
   *h = new_node;
   return *h;
}


node_t *BuildOneTwoThree()
{
    node_t *head = NULL;
    for(int i = 1; i < 4; i++) {
        Push(&head, i);
    }
    return head;
}

int Count(node_t *head, int searchFor)
{
    int cnt = 0;
    while(head != NULL) {
        if((head -> data) == searchFor) {
            cnt++;
        }
        head = (head -> next);
    }
    return cnt;
}

int GetNth(node_t *head, int index)
{
    for(int i = 0; i < index; i++) {
        assert(head != NULL);
        head = (head -> next);
    }
    return (head -> data);
}

void DeleteList(node_t **headRef) 
{
    node_t *node_to_free = NULL;
    while(*headRef != NULL) {
        node_to_free = *headRef;
        *headRef = ((*headRef) -> next);
        free(node_to_free);
    }
}

int Length(node_t *head)
{
    int res = 0;
    while(head != NULL) {
        res++;
        head = (head -> next);
    }
    return res;
}

void DeleteNode(node_t **headRef, int data) {
   node_t *prev = NULL;
   node_t *tmp = NULL;
   node_t *curr = *headRef;

   while(curr != NULL) {
       if ((curr -> data)  == data) {
            if(prev == NULL) {
                *headRef = (curr -> next);
            } else {
                (prev -> next) = (curr -> next);
            }
            tmp = curr;
            curr = (curr -> next);
            free(tmp);
       } else {
            prev = curr;
            curr = (curr -> next);
       }
   }
}
