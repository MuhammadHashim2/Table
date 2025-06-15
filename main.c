#include <stdio.h>

int main() {
int t,n,ans;

printf("Enter Number To Generate Table: ");
scanf("%d",&t);
for(n=1;n<=10;n++){
    ans = t * n;
    printf("%d",t);
    printf("x");
    printf("%d",n);
    printf("=");
    printf("%d",ans);
    printf("\n");
}
  return 0;
}
