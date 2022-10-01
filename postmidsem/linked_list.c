#include<stdio.h>
#include<stdlib.h>

struct mynode{
    int data;
    struct mynode* next;
};

struct mynode* CreateNode(int x)
{
    struct mynode* n;
    n= (struct mynode*) malloc(sizeof(struct mynode));
    n->data=x;
    n->next=NULL;
    return n;
}
struct mynode* SearchList(struct mynode* head, int x)
{
    while(head!=NULL)
    {
        if(head->data==x)
           { return head; }
        head= head->next;
    }
    return NULL; //if element not found
}

void PrintList(struct mynode* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head= head->next;
    }
}
// PrintNode()
// {

// }

struct mynode* InsertAtStart(struct mynode* head, int x)
{
    struct mynode* n;
    n=CreateNode(x);
    n->next= head;
    head=n;
    return head;
}
void InsertAfter(struct mynode* head, int x, int x_after)
{   
    struct mynode *n, *q;
    n=SearchList(head,x);
    q=CreateNode(x_after);
    q->next= n->next;
    n->next=q;    
}
//write the complete insert func

//returns new head pointer:
struct mynode* DeleteStart(struct mynode* head)
{
    struct mynode* newhead;
    newhead= head->next;
    free(head);
    return newhead;
}
//'x' is the data you're searching for, and node returned is the one preceeding the node containing x.
struct mynode* SearchPrev(struct mynode* head, int x)
{
    if(head->data==x) { return NULL; } //if data is in 1st node itself, then its previous doesn't exist.
    while(head->next != NULL)
    {
        if(head->next->data==x) { return head; }
        head= head->next;
    }
    return NULL; //if data not found
}
void DeleteNode(struct mynode* prev, struct mynode* targetnode)
{
    prev->next= targetnode->next;
    free(targetnode);
}
//the complete delete function. NOTE: returns a head pointer.
struct mynode* Delete(struct mynode* head, int x)
{
    struct mynode* p,*prev;
    if(head->data==x) {head= DeleteStart(head);}
    else{
        p= SearchList(head,x);
        if(p==NULL) {printf("value is not present in list.\n");}
        else{
            prev= SearchPrev(head,x);
            DeleteNode(prev,p);
        }
    }
    return head;
}

void main()
{
    struct mynode* firstnode;
    struct mynode* secondnode;
    struct mynode* thirdnode;
    firstnode= CreateNode(19);
    secondnode= CreateNode(23);
    thirdnode= CreateNode(45);
    //creating links:
    firstnode->next= secondnode;
    secondnode->next= thirdnode;

    PrintList(firstnode); //firstnode is head pointer.
    printf("\n");

    struct mynode* searched;
    searched= SearchList(firstnode,45);
    printf("searched item has been found: %d\n",searched->data);

    struct mynode* newfirst;
    newfirst= InsertAtStart(firstnode,36);
    PrintList(newfirst);
    printf("\n");

    InsertAfter(newfirst,23,59); //insert 59 after 23
    InsertAfter(newfirst,45,189);
    PrintList(newfirst);
    printf("\n");

    struct mynode* first2;
    first2= Delete(newfirst,23);
    PrintList(first2);
    printf("\n");

    struct mynode* first3;
    first3= Delete(first2,36);
    PrintList(first3);
    printf("\n");

}
//a comprehensive insert function:
/*Insert(struct mynode* listhead, int x, int x_after)
{
    struct mynode* n,*q;
}*/