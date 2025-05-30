#include <stdio.h>

int main() {
  int a,b,c=0;
  scanf("%d",&a); 
  for(b=1;b<=a;b++){
    printf("%d\n",b);
   c=c+b; 
  }
  printf("合計は%dです。/n",c);
    return 0;
}