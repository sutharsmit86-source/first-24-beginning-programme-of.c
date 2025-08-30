#include <stdio.h>
int main()
{ float g;
  printf ("gross salary:");
  scanf("%f",&g);
  printf ("allowance:%f\n",g/10);
  printf ("deduction:%f\n",g*3/100);
  printf ("net salary:%f",g-g/10-g*3/100);
  return 0;
}  