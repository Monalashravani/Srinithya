#include <stdio.h>
float power(float x, int n)
{
 float temp;
 if (n == 0)
  return 1;
 temp = power(x, n / 2);
 if (n % 2 == 0)
  return temp * temp;
 else {
  if (n > 0)
   return x * temp * temp;
  else
   return (temp * temp) / x;
 }
}
int main()
{
 float x;
 int n;
printf("x = ");
 scanf("%f",&x);
    printf("\n");
    printf("n = ");
    scanf("%d",&n);
printf("%.5f", power(x, n));
 return 0;
}
