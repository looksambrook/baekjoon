#include <stdio.h>
#include <stdlib.h>
 
#define TRUE    1
#define FALSE    0
 
typedef int Data;
 
typedef struct _node
{
    Data data;
    struct _node* next;
}Node;
 
typedef struct _CLL
{
    Node* tail;
    Node* cur;
    Node* before;
    int numOfData;
}CList;
 
typedef CList List;
 
void ListInit(List* plist)
{
    plist->tail = NULL;
    plist->cur = NULL;
    plist->before = NULL;
    plist->numOfData = 0;
}
 
void LInsertFront(List* plist, Data data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
 
    if (plist->tail == NULL)
    {
        plist->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
    }
    (plist->numOfData)++;
}
 
void LInsert(List* plist, Data data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
 
    if (plist->tail == NULL)
    {
        plist->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
        plist->tail = newNode;
    }
    (plist->numOfData)++;
}
int LFirst(List* plist, Data* pdata)
{
    if (plist->tail == NULL)
        return FALSE;
    plist->before = plist->tail;
    plist->cur = plist->tail->next;
 
    *pdata = plist->cur->data;
    return TRUE;
}
int LNext(List* plist, Data* pdata)
{
    if (plist->tail == NULL)
        return FALSE;
 
    plist->before = plist->cur;
    plist->cur = plist->cur->next;
 
    *pdata = plist->cur->data;
    return TRUE;
}
 
Data LRemove(List* plist)
{
    Node* rpos = plist->cur;
    Data rdata = rpos->data;
 
    if (rpos == plist->tail)
    {
        if (plist->tail == plist->tail->next)
            plist->tail = NULL;
        else
            plist->tail = plist->before;
    }
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;
 
    free(rpos);
    (plist->numOfData)--;
    return rdata;
}
 
int LCount(List* plist)
{
    return plist->numOfData;
}
 
int main()
{
    List list;
    int data;
    ListInit(&list);
 
    int a, b;
    scanf("%d %d", &a, &b);
 
    for (int i = 1; i <= a; i++)
    {
        LInsert(&list, i);
    }
    if (a == 1 && b == 1)
    {
        printf("<1>");
    }
    else
    {
        printf("<");
        LFirst(&list, &data);
        for (int j = 0; j < b - 1; j++)
        {
            LNext(&list, &data);
        }
        LRemove(&list);
        printf("%d, ", data);
        for (int s = 0; s < a - 2; s++)
        {
            for (int t = 0; t < b; t++)
            {
                LNext(&list, &data);
            }
            LRemove(&list);
            printf("%d, ", data);
        }
        LNext(&list, &data);
        printf("%d", data);
 
        printf(">");
    }
    return 0;
}
