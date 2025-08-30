#include <stdio.h>
int main()
{ float x;
  printf ("enter a weight in grams:");
  scanf("%f",&x);
  printf("weight in kilogram : %f",x/1000);
  return 0;
}  