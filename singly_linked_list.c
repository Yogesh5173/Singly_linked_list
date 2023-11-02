#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef struct SNodetype
{
    int info;
    struct SNodetype *next;
} SN;

void insertbeg(SN **head)
{
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter info\n");
        scanf("%d", &temp->info);
        temp->next = *head;
        *head = temp;
        printf("Done %c", 1);
    }
}
/*
void insertbeg(SN **head)
{
    SN *temp;
    int x;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("overflow\n");
    }
    else if (*head == NULL)
    {
        printf("enter info\n");
        getchar();
        scanf("%d", &x);
        temp->info = x;
        *head = temp;
        temp->next = NULL;
        printf("Done %c", 1);
    }
    else
    {
        printf("enter info\n");
        getchar();
        scanf("%d", &x);
        temp->info = x;
        temp->next = *head;
        *head = temp;
        printf("Done %c", 1);
    }
}
*/

void insertlast(SN **head)
{
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("Overflow\n");
    }
    else if (*head == NULL)
    {
        printf("Enter info\n");
        scanf("%d", &temp->info);
        temp->next = *head;
        *head = temp;
    }
    else
    {

        SN *p1;
        p1 = *head;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        printf("Enter info\n");
        scanf("%d", &temp->info);
        temp->next = NULL;
        p1->next = temp;
        printf("Done %c", 1);
    }
}
/*
void insertlast(SN **head)
{
    SN *temp, *p1;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("overflow\n");
    }
    else if (*head == NULL)
    {
        printf("enter info\n");
        scanf("%d", &temp->info);
        *head = temp;
        temp->next = NULL;
        printf("Done %c", 1);
    }
    else
    {
        p1 = *head;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        printf("Enter info\n");
        scanf("%d", &temp->info);
        p1->next = temp;
        temp->next = NULL;
        printf("Done %c", 1);
    }
}
*/
/*void insertasanodeno(SN **head)
{
    int p;
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("enter the node number as which you want to insert\n");
        scanf("%d", &p);
        if (p == 1)
        {
            insert(&head);
        }
        else
        {
            SN *p1, *p2;
            int n = 1;
            p1 = *head;
            while (n < p && p1->next != NULL)
            {
                p2 = p1;
                p1 = p1->next;
                n++;
            }
            if (p1->next == NULL)
            {
                printf("Position not found\n");
            }
            else
            {
                printf("Enter info\n");
                scanf("%d", &temp->info);
                p2->next = temp;
                temp->next = p1;
                printf("Done %c", 1);
            }
        }
    }
}*/
void insertasanodeno(SN **head)
{
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("OVERFLOW\n");
    }
    else if (*head == NULL)
    {
        SN *p1;
        p1 = *head;
        int n;
        printf("Enter the node number as which node will be inserted\n");
        scanf("%d", &n);
        printf("Enter the info value of new node\n");
        scanf("%d", &temp->info);
        temp->next = NULL;
        *head = temp;
        printf("Done %c", 1);
    }
    else
    {
        SN *p1;
        p1 = *head;
        int n, f = 1;
        printf("Enter the node number as which node will be inserted\n");
        scanf("%d", &n);
        while (f != n - 1 && p1->next != NULL)
        {
            p1 = p1->next;
            f++;
        }
        if (p1->next != NULL)
        {
            printf("Enter the info value of new node\n");
            scanf("%d", &temp->info);
            temp->next = p1->next;
            p1->next = temp;
            printf("Done %c", 1);
        }
        else
        {
            printf("info not found\n");
        }
    }
}

void insertafter(SN **head)
{
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        SN *p1;
        p1 = *head;
        int num;
        printf("Enter the info value after which node will be inserted\n");
        scanf("%d", &num);
        while (p1->info != num && p1->next != NULL)
        {
            p1 = p1->next;
        }
        if (p1->next != NULL)
        {
            printf("Enter the info value of new node\n");
            scanf("%d", &temp->info);
            temp->next = p1->next;
            p1->next = temp;
        }
        else
        {
            printf("info not found\n");
        }
        printf("Done %c", 1);
    }
}

void insertbefore(SN **head)
{
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        int num;
        printf("Enter the info value before which node will be inserted\n");
        scanf("%d", &num);
        while (p1->info != num && p1->next != NULL)
        {
            p2 = p1;
            p1 = p1->next;
        }
        if (p1->next != NULL)
        {
            printf("Enter the info value of new node\n");
            scanf("%d", &temp->info);
            temp->next = p2->next;
            p2->next = temp;
        }
        else
        {
            printf("info not found\n");
        }
        printf("Done %c", 1);
    }
}

void insert(SN **head)
{
    int pos, c = 0;
    printf("input pos");
    scanf("%d", &pos);
    SN *temp;
    temp = (SN *)malloc(sizeof(SN));
    if (temp == NULL)
    {
        printf("memory not aalocate");
    }
    else
    {
        SN *p;
        p = *head;
        while (p != NULL)
        {
            c++;
            p = p->next;
        }
        pos = c - pos;
        p = *head;
        c = 0;
        while (c != pos)
        {
            c++;
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
        printf("input info");
        scanf("%d", &temp->info);
    }
}

void deletebeg(SN **head)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1;
        p1 = *head;
        *head = p1->next;
        free(p1);
        printf("Done %c", 1);
    }
}

void deletelast(SN **head)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        while (p1->next != NULL)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p2->next = NULL;
        free(p1);
        printf("Done %c", 1);
    }
}

void deleteinfo(SN **head)
{
    /*if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        int num;
        printf("Enter the info value before which node will be deleted\n");
        scanf("%d", &num);
        while (p1->info != num)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p2->next = p1->next;
        free(p1);
        printf("Done %c", 1);
    }*/
    SN *p1, *p2, *p3;
    int num;
    printf("Enter the info value before which node will be deleted\n");
    scanf("%d", &num);
    if (*head == NULL)
    {
        // return head;
    }
    else
    {
        p1 = *head;
        while (p1 != NULL)
        {
            if (num == (*head)->info)
            {
                p1 = p1->next;
                free(*head);
                *head = p1;
            }
            else
            {
                p2 = NULL;
                // p1=head;
                while (p1->info != num && p1->next != NULL)
                {
                    p2 = p1;
                    p1 = p1->next;
                }
                if (p1->next == NULL)
                {
                    if (p1->info == num)
                    {
                        p2->next = NULL;
                        free(p1);
                        printf("world\n");
                        p1 = NULL;
                    }
                }
                else
                {
                    p2->next = p1->next;
                    free(p1);
                    printf("hello\n");
                    p1 = p2;
                }
            }
        }
        // return head;
    }
}

void deleteafter(SN **head)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        int num;
        printf("Enter the info value before which node will be deleted\n");
        scanf("%d", &num);
        while (p1->info != num)
        {
            p1 = p1->next;
            p2 = p1->next;
        }
        p1->next = p2->next;
        free(p2);
        printf("Done %c", 1);
    }
}

void deletebefore(SN **head)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        int num;
        printf("Enter the info value node whose befors node will be deleted\n");
        scanf("%d", &num);
        while (p1->info != num)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p1->next = p2->next;
        free(p2);
        printf("Done %c", 1);
    }
}

void delete_alternate_node(SN **head)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2, *p3;
        p1 = *head;
        int f = 0;
        while (p1->next != NULL)
        {
            p2 = p1;
            p1 = p1->next;
            p2->next = p1->next;
            p3 = p1;
            p1 = p1->next;
            free(p3);
        }
    }
    printf("\nDone %c", 1);
}

int delete_nth_beg(SN **head, int num)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        int c = 1, n;
        printf("enter the value of n\n");
        scanf("%d", &n);
        // n = num - n + 1;
        while (c < n)
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        p2->next = p1->next;
        free(p1);
        printf("Done %c", 1);
    }
}

int delete_nth_last(SN **head, int num)
{
    if (*head == NULL)
    {
        printf("LL is empty");
    }
    else
    {
        SN *p1, *p2;
        p1 = *head;
        int c = 1, n;
        printf("enter the value of n\n");
        scanf("%d", &n);
        n = num - n + 1;
        while (c < n)
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        p2->next = p1->next;
        free(p1);
        printf("Done %c", 1);
    }
}

void search(SN **head)
{
    SN *p1;
    int n, c = 1;
    p1 = *head;
    if (*head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Enter the Info to search\n");
        scanf("%d", &n);
        while (p1->info != n && p1->next != NULL)
        {
            c++;
            p1 = p1->next;
        }
        if (p1->next == NULL)
        {
            printf("INFO not found\n");
        }
        else
        {
            printf("Info found at node number %d", c);
        }
    }
}

void reverse(SN **head)
{
    SN *p1;
    p1 = *head;
    if (*head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        SN *p2, *p3;
        p3 = p1;
        p2 = p3;
        p1 = p1->next;
        p2->next = NULL;
        p3 = p1;
        /*p1 = p1->next;
        p3->next = p2;
        p2 = p3;
        p3 = p1;*/
        while (p1->next != NULL)
        {
            p1 = p1->next;
            p3->next = p2;
            p2 = p3;
            p3 = p1;
        }
        p3->next = p2;
        *head = p1;
    }
    printf("\nDone %c", 1);
}

void removeduplicate(SN **head)
{
    SN *p1, *p2, *p3;
    p1 = *head;
    while (p1 != NULL)
    {
        p2 = p1;
        while (p2->next != NULL)
        {
            if (p1->info == p2->next->info)
            {
                p3 = p2->next;
                p2->next = p2->next->next;
                free(p3);
            }
            else
            {
                p2 = p2->next;
            }
        }
        p1 = p1->next;
    }
    printf("\nDone %c", 1);
}

int sort(SN **head, int num)
{
    SN *p1, *p2;
    int n;

    while (num != 0)
    {
        p1 = *head;
        p2 = p1->next;
        while (p2 != NULL)
        {
            if (p1->info > p2->info)
            {
                n = p1->info;
                p1->info = p2->info;
                p2->info = n;
            }
            p1 = p1->next;
            p2 = p1->next;
        }
        num--;
    }
    printf("\nDone%c\n", 1);
}

void multiplication(SN **head)
{
    int s, s1 = 0, s2 = 0, c = 1;
    SN *head2;
    head2 = NULL;
    printf("Initialise the second linked list\n");
    while (c < 4)
    {
        SN *temp1, *p1;
        temp1 = (SN *)malloc(sizeof(SN));
        if (temp1 == NULL)
        {
            printf("overflow\n");
        }
        else if (head2 == NULL)
        {
            printf("\nenter info\n");
            scanf("%d", &temp1->info);
            head2 = temp1;
            temp1->next = NULL;
            printf("Done %c", 1);
        }
        else
        {
            p1 = head2;
            while (p1->next != NULL)
            {
                p1 = p1->next;
            }
            printf("\nEnter info\n");
            scanf("%d", &temp1->info);
            p1->next = temp1;
            temp1->next = NULL;
            // printf("Done %c\n", 1);
        }
        c++;
    }
    SN *p1 = *head;
    while (p1 != NULL)
    {
        s1 = s1 * 10 + p1->info;
        p1 = p1->next;
    }
    p1 = head2;
    while (p1 != NULL)
    {
        s2 = s2 * 10 + p1->info;
        p1 = p1->next;
    }
    s = s1 * s2;
    printf("product of two linked list is: %d\n", s);
}

void concat(SN **head)
{
    int c = 0;
    SN *head2;
    head2 = NULL;
    printf("Initialise the second linked list\n");
    while (c < 4)
    {
        SN *temp1, *p1;
        temp1 = (SN *)malloc(sizeof(SN));
        if (temp1 == NULL)
        {
            printf("overflow\n");
        }
        else if (head2 == NULL)
        {
            printf("\nenter info\n");
            scanf("%d", &temp1->info);
            head2 = temp1;
            temp1->next = NULL;
            printf("Done %c", 1);
        }
        else
        {
            p1 = head2;
            while (p1->next != NULL)
            {
                p1 = p1->next;
            }
            printf("\nEnter info\n");
            scanf("%d", &temp1->info);
            p1->next = temp1;
            temp1->next = NULL;
            // printf("Done %c\n", 1);
        }
        c++;
    }
    SN *p1;
    p1 = *head;
    while (p1->next != NULL)
    {
        p1 = p1->next;
    }
    p1->next = head2;
}

void binary(SN **head)
{
    SN *p1;
    int num = 0;
    p1 = *head;
    while (p1 != NULL)
    {
        num = (num * 2) + p1->info;
        p1 = p1->next;
    }
    printf("decimal equivalent = %d", num);
}

void traverse(SN **head)
{
    SN *p1;
    p1 = *head;
    if (*head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        while (p1 != NULL)
        {
            printf("%d ", p1->info);
            p1 = p1->next;
        }
        printf("\nDone %c", 1);
    }
}

void traversealt(SN **head)
{
    SN *p1;
    int c = 1;
    p1 = *head;
    if (*head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        while (p1 != NULL)
        {
            if (c % 2 != 0)
            {
                printf("%d ", p1->info);
            }
            p1 = p1->next;
            c++;
        }
        printf("\nDone %c", 1);
    }
}

int main()
{
    int ch, c, num = 0;
    SN *head = NULL;
    do
    {
        printf("\n\t\t*****Available Choices*****\n");
        printf("\t\t\t1.insertion\n");
        printf("\t\t\t2.deletion\n");
        printf("\t\t\t3.Search the info value\n");
        printf("\t\t\t4.reverse\n");
        printf("\t\t\t5.sorting\n");
        printf("\t\t\t6.remove duplicate nodes\n");
        printf("\t\t\t7.multiplication two linked list\n");
        printf("\t\t\t8.concatination two linked list\n");
        printf("\t\t\t9.Decimal equivalent number\n");
        printf("\t\t\t10.display the linked list\n");
        printf("\t\t\t11.Exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            do
            {
                printf("\t\t*****Available Choices*****\n");
                printf("\t\t\t1.insertion at begining\n");
                printf("\t\t\t2.insertion at last\n");
                printf("\t\t\t3.insertion as a node number(except first and last pos.)\n");
                printf("\t\t\t4.insertion a node at nth poition from last\n");
                printf("\t\t\t5.insertion at after a node number/info\n");
                printf("\t\t\t6.insertion at before a node number/info\n");
                printf("\t\t\t7.Exit\n");
                printf("Enter your choice\n");
                scanf("%d", &c);
                switch (c)
                {
                case 1:
                    insertbeg(&head);
                    num++;
                    break;
                case 2:
                    insertlast(&head);
                    num++;
                    break;
                case 3:
                    insertasanodeno(&head);
                    num++;
                    break;
                case 4:
                    insert(&head);
                    num++;
                    break;
                case 5:
                    insertafter(&head);
                    num++;
                    break;
                case 6:
                    insertbefore(&head);
                    num++;
                    break;
                default:
                    printf("*****Invalid choice*****\n");
                    break;
                }
            } while (c < 6);
            break;
        case 2:
            do
            {
                printf("\t\t*****Available Choices*****\n");
                printf("\t\t\t1.deletion from begining\n");
                printf("\t\t\t2.deletion from last\n");
                printf("\t\t\t3.deletion as a node number/info\n");
                printf("\t\t\t4.deletion at after a node number/info\n");
                printf("\t\t\t5.deletion at before a node number/info\n");
                printf("\t\t\t6.deletion of alternate nodes\n");
                printf("\t\t\t7.removeal of nth node from begning\n");
                printf("\t\t\t8.removeal of nth node from last\n");
                printf("\t\t\t9.Exit\n");
                printf("Enter your choice\n");
                scanf("%d", &c);
                switch (c)
                {
                case 1:
                    deletebeg(&head);
                    num--;
                    printf("%d\n", num);
                    break;
                case 2:
                    deletelast(&head);
                    num--;
                    printf("%d\n", num);
                    break;
                case 3:
                    deleteinfo(&head);
                    num--;
                    printf("%d\n", num);
                    break;
                case 4:
                    deleteafter(&head);
                    num--;
                    printf("%d\n", num);
                    break;
                case 5:
                    deletebefore(&head);
                    num--;
                    printf("%d\n", num);
                    break;
                case 6:
                    delete_alternate_node(&head);
                    num--;
                    printf("%d\n", num);
                    break;
                case 7:
                    num = delete_nth_beg(&head, num);
                    num--;
                    printf("%d\n", num);
                    break;
                case 8:
                    num = delete_nth_last(&head, num);
                    num--;
                    printf("%d\n", num);
                    break;
                default:
                    printf("*****Invalid choice*****");
                    break;
                }
            } while (c < 9);
            break;
        case 3:
            search(&head);
            break;
        case 4:
            reverse(&head);
            break;
        case 5:
            num = sort(&head, num);
            break;
        case 6:
            removeduplicate(&head);
            break;
        case 7:
            multiplication(&head);
            break;
        case 8:
            concat(&head);
            break;
        case 9:
            binary(&head);
            break;
        case 10:
            do
            {
                printf("\t\t*****Available Choices*****\n");
                printf("\n\t\t\t1.display full linked list\n");
                printf("\t\t\t2.display the alternate linked list\n");
                printf("\t\t\t3.Exit\n");
                printf("Enter your choice\n");
                scanf("%d", &c);
                switch (c)
                {
                case 1:
                    traverse(&head);
                    break;
                case 2:
                    traversealt(&head);
                default:
                    break;
                }
            } while (c < 3);
            break;
        default:
            printf("\t\t***** THANK YOU %c *****\n", 3);
            exit(0);
            break;
        }
    } while (ch < 11);
    return 0;
}
