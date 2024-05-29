#include <stdio.h>
#include <math.h>
int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   printf("floor %d / %d = %.0f\n",a,b,(floor((float)a/b)));
   printf("ceil %d / %d = %.0f\n",a,b,(ceil((float)a/b)));
   printf("round %d / %d = %.0f\n",a,b,(round((float)a/b)));
 
   return 0;
}
