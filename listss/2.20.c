#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
  float x, y, z, q, a, b, c, d, e, f,g,h,i,j,k;
  printf("vvedite e: \n");
  scanf("%f", &e);
  printf("vvedite f: \n");
  scanf("%f", &f);
  printf("vvedite g: \n");
  scanf("%f", &g);
  printf("vvedite h: \n");
  scanf("%f", &h);
  d=e+f/2;
  a=d/3;
  y=pow(h,2);
  z=y-g;
  b=fabs(z);
  i=g-h;
  j=pow(i,2);
  k=(3*sin(e));
  c=sqrt(j-k);
  printf("a=%f, b=%f, c=%f",a,b,c);
  
}
