/*checking whether #define can be used inside main function. Ans= yes.*/
#include<stdio.h>
int main()
{
    #define name "Ridhiman"
    #define institute "iit guwahati"
    printf("%s studies at %s",name,institute);
}