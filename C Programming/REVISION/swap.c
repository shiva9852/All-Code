#include <stdio.h>

struct link
{
    int info;
    struct link *next;
};
int main()
{
    struct link *q, *start, *temp;
    int no, op;
    start = NULL;

    do
    {
        temp = (struct link *)malloc(sizeof(struct link));
        printf("\n enter value:");
        scanf("%d", &no);
        temp->info = no;
        temp->next = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            temp->next = start;
            start = temp;
        }
        printf("\n Press 1 to add new data :");

        scanf("%d", &op);
    } while (op == 1);
    q = start;
    while (q != NULL)
    {
        printf("\n%d", q->info);
        q = q->next;
    }
    return 0;
}