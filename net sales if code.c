#include<stdio.h>
int main()
{ int g;
  printf("gross sales :");
  scanf("%d",&g);
  if(g>20000) 
  {
   printf("discount :%d\n",g*15/100);
   printf("net sales :%d\n",g-g*15/100);
  } 
  if(g>10000 && g<20000) 
  {
   printf("discount :%d\n",g/10);
   printf("net sales :%d\n",g-g/10);
  } 
  if(g>0 && g<10000) 
  {
   printf("discount :%d\n",g/20);
   printf("net sales :%d\n",g-g/20);
  } 
}  