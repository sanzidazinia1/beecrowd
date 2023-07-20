#include <stdio.h>

int main()
{
    int day;
    scanf("%d", &day);
    int y=0,m=0,d=0;
    
    y=day/365;
    printf("%d ano(s)\n",y);
  day=day%365;
  
  m=day/30;
  printf("%d mes(es)\n",m);

  day=day%30;
  printf("%d dia(s)\n",day);
  
    return 0;
}
