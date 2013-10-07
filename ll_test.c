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
    
    node_t *head;
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
    int searchFor = 7;
    printf("number of %ds in the list = %d\n", searchFor, Count(rand_list, searchFor));
    int index = 9;
    printf("list[%d] = %d\n", index, GetNth(rand_list, index));

    printf("\n\n FREEING the LIST!!\n");
    DeleteList(rand_list);
    return 0;
}


