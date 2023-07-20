#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);

    int oneH = 0, fifty = 0, twenty = 0, ten = 0, five = 0,
    two = 0, one = 0;
    // n=576
    oneH = n / 100;
    printf("%d nota(s) de R$ 100,00\n", oneH);
    
    n = n % 100;
    
    fifty=n/50;
    printf("%d nota(s) de R$ 50,00\n", fifty);
    n=n%50;//26
    
    twenty=n/20;
    printf("%d nota(s) de R$ 20,00\n", twenty);
    n=n%20;
    
    ten=n/10;
    printf("%d nota(s) de R$ 10,00\n", ten);
    n=n%10;
    
    five=n/5;
    printf("%d nota(s) de R$ 5,00\n", five);
    n=n%5;
    
    two=n/2;
    printf("%d nota(s) de R$ 2,00\n", two);
    n=n%2;
    
    one=n/1;
    printf("%d nota(s) de R$ 1,00\n", one);
   
    return 0;
}
