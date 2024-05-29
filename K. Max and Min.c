#include <stdio.h>
#include <math.h>
int main() {
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a==b && b==c)
printf("%d %d",a,b);
if (a==b){
  if (a>c)
    printf("%d %d",c,a);
}
if (a==c){
  if (a>b)
    printf("%d %d",b,a);
}
if (b==c){
  if (b>a)
    printf("%d %d",a,b);
}
if (a>b && a>c)
{
    if (b>c)
    printf("%d %d",c,a);
    else
    printf("%d %d",b,a);
}
else if (b>a && b>c)
{
    if (a>c)
    printf("%d %d",c,b);
     else
    printf("%d %d",a,b);
}
else if (c>b && c>a)
{
    if (b>a)
    printf("%d %d",a,c);
     else
    printf("%d %d",b,c);
 
}
 
   return 0;
}
