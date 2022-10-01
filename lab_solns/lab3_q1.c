#include<stdio.h>
int main()
{
    int a1,a2;
    char c1,c2,symb;
    double b1,b2;
    scanf("%d%c%c%d%c",&a1,&c1,&symb,&a2,&c2);

    if(c1=='F') {b1= a1/10.76391041671;}
    else if(c1=='Y') {b1=9*a1/10.76391041671;}
    else if(c1=='A') {b1=43560*a1/10.76391041671;}
    else if(c1=='H') {b1=107639.1041671*a1/10.76391041671;}
    else if(c1=='I') {b1=0.0069444444444444*a1/10.76391041671;}
    else if(c1=='C') {b1=435.6*a1/10.76391041671;}
    else{b1=a1;}
    
    if(c2=='F') {b2= a2/10.76391041671;}
    else if(c2=='Y') {b2=9*a2/10.76391041671;}
    else if(c2=='A') {b2=43560*a2/10.76391041671;}
    else if(c2=='H') {b2=107639.1041671*a2/10.76391041671;}
    else if(c2=='I') {b2=0.0069444444444444*a2/10.76391041671;}
    else if(c2=='C') {b2=435.6*a2/10.76391041671;}
    else{b2=a2;}

    if(symb=='+') {printf("%lf square meter\n",b1+b2);}
    else if(symb=='-') {printf("%lf square meter\n",b1-b2);}
    
}