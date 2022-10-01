//library records
#include<stdio.h>
struct book
{
    char title[50];
    int price;
    char author[15];
};
int main()
{
    struct book bk[5];
    printf("enter 5 book titles:\n");
    for(int i=0;i<5;i++)
        {
        scanf("%s",&bk[i].title);
        }
    printf("enter 5 book prices:\n");
    for(int i=0;i<5;i++)
        {
        scanf("%d",&bk[i].price);
        }
    printf("enter 5 author names:\n");
    for(int i=0;i<5;i++)
        {
        scanf("%s",&bk[i].author);
        }
    for(int i=0;i<5;i++)
        {
            printf("record %d: %s %d %s\n",i,bk[i].title,bk[i].price,bk[i].author);
        }
}