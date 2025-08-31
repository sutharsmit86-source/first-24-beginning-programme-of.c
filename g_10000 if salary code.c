#include<stdio.h>
int main()
{int g;
printf("gross salary :");
scanf("%d",&g);
if(g>10000 )
  { printf("allowance :%d\n",g/10);
    printf("deduction :%d\n",g*3/100);
    printf("net salary :%d\n",g+g/10-g*3/100);
  }  
if(g>=5000 && g<=10000)
  { printf("allowance :%d\n",g*7/100);
    printf("deduction :%d\n",g*2/100);
    printf("net salary :%d",g+g*7/100-g*2/100);
  }  
}  