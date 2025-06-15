#include <stdio.h>

int main() {
int t,n,ans;

printf("Enter Number To Generate Table: ");
scanf("%d",&t);
for(n=1;n<=10;n++){
    ans = t * n;
    printf("%d x %d = %d\n",t,n,ans);
}
  return 0;
}
