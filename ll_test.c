#include "ll_func.h"
#include <stdio.h>
#include <stdlib.h>

void Print_ll(node_t *head)
{
    while(head != NULL) {
        printf(" %d ", (head -> data));
        head = (head -> next);
    }
    printf("\n");
}

node_t *GenerateRandomList(int count, unsigned int range)
{
    
    node_t *head = NULL;
    for(int i = 0; i < count; i++) {
        Push(&head, rand() % range);
    }
    return head;
}

int main()
{
    node_t *n = BuildOneTwoThree();
    Print_ll(n);
    printf("length of the linked list 1,2,3 is %d\n",Length(n));
    
    int c = 15;
    int range = 20;
    printf("generating a random list of %d numbers under %d:\n", c, range);
    node_t *rand_list = GenerateRandomList(c, range);
    Print_ll(rand_list);
    printf("count of list = %d\n", c);
    int searchFor = 3;
    printf("number of %ds in the list = %d\n", searchFor, Count(rand_list, searchFor));
    int index = 9;
    printf("list[%d] = %d\n", index, GetNth(rand_list, index));

    printf("deleting node %d\n", searchFor);
    DeleteNode(&rand_list, searchFor);
    printf("new_list : \n");    
    Print_ll(rand_list);
    
    node_t *constantList = NULL;
    int constant = 8;
    for(int i=0; i < 6; i++) {Push(&constantList, constant);}
    printf("constnat list = ");
    Print_ll(constantList);
    DeleteNode(&constantList, constant);
    printf("constnat list after deletion= ");
    Print_ll(constantList);

    printf("\n\n FREEING the LIST!!\n");
    DeleteList(&n);
    DeleteList(&rand_list);
    return 0;
}


