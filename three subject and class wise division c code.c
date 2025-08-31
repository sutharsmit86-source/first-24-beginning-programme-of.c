#include<stdio.h>
int main()
{ int h,i,j,k;
  printf("maths :");
  scanf("%d",&h);
  printf("physics :");
  scanf("%d",&i);
  printf("chemistry :");
  scanf("%d",&j);
  printf("total :%d\n",h+i+j);
  k=(h+i+j)/3;
  printf("average :%d\n",k);
  if(k>=70) 
  {
   printf("distinction ");
  } 
  if(k>=60 && k<70) 
  {
   printf("first class");
  } 
  if(k>=50 && k<60) 
  {
   printf("second class");
  } 
  if(k>=35 && k<50) 
  {
   printf("third class");
  } 
  if(k<35) 
  {
   printf("fail");
  }
}  