#include <stdio.h>
int main()
{ float x;
  printf ("enter a temprature in fahreinheit:");
  scanf("%f",&x);
  printf("temprature in celcius: %f\n",(x-32)*5/9);
  
  return 0;
}  