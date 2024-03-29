#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
  float x, y, z, q, a, b, c, d, e, f,g,h;
  printf("vvedite a: \n");
  scanf("%f", &a);
  printf("vvedite b: \n");
  scanf("%f", &b);
   e = pow(a, 2);
   z = (2/(e+25))+b;
   f = sqrt(b);
   q = f + ((a+b)/2);
   x = z / q;
    c = fabs(a);
    d = 2*sin(b);
    g = c + d;
    h = 5.5*a;
    y = g / h;
  printf("x = %f, y = %f", x, y);
}
