#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int h=0,min=0,sec=0;
    
    h=number/3600;
    printf("%d:",h);
  number=number%3600;
  
  min=number/60;
  printf("%d:",min);

  number=number%60;
  printf("%d\n",number);
  
    return 0;
}
