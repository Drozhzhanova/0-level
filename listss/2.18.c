#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
  setlocale(LC_ALL, "Rus");
  float x, y, z, q, a, b, c, d, e, f;
  printf("������� x: \n");
  scanf("%f", &x);
  printf("������� y: \n");
  scanf("%f", &y);
   e = pow(x, 2);
   a = x + (2 + y) / e;
   f = sqrt(e + 10);
   b = y + (1 / f);
   z = a / b;
    c = fabs(y);
    d = sin(x);
    q = 7.25 * d - c;
  printf("z = %f, q = %f", z, q);
}
