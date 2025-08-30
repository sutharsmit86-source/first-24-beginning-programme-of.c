#include <stdio.h>
int main()
{ int g,h,i;
 printf("enter a first number :");
 scanf("%d",&g);
 printf("enter a second number :");
 scanf("%d",&h);
 printf("enter a third number :");
 scanf("%d",&i);
   {if(g>h && g>i)
     printf("\n%d is largest number",g);
    if(h>i && h>g)
     printf("%d is largest number\n",h);
    if(i>h && i>g)
     printf("%d is larjest number\n",i);
   }
   {if(g<h && g<i)
     printf("\n%d is smallest number",g);
    if(h<i && h<g)
     printf("%d is smallest number\n",h);
    if(i<h && i<g)
     printf("%d is smallest number\n",i);
  }  
}  