#include <stdio.h>
int main()
{ int g,h;
 printf("enter a first number :");
 scanf("%d",&g);
 printf("enter a second number :");
 scanf("%d",&h);
   {if(g>h )
     printf("\n%d is largest number",g);
    if(h>g)
     printf("%d is largest number\n",h);
    
   }
   {if(g<h)
     printf("\n%d is smallest number",g);
    if(h<g)
     printf("%d is smallest number\n",h);
    
  }  
}  