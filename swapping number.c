#include <stdio.h>
int main()
{ int g,h;
 g=10;
 h=50;
 printf("before swaping g=%d h=%d\n",g,h);
 g=g+h;
 h=g-h;
 g=g-h;
 printf("after swaping g=%d h=%d",g,h);
 return 0;
}  