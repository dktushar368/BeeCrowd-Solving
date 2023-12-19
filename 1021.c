#include<stdio.h>
int main()
{
    double tk;
    int n1,n2,n3,n4,n5,n6,c1,c2,c3,c4,c5,c6;
    scanf("%lf",&tk);

    printf("NOTAS:\n");
    n1=tk/100;
    n2=tk-(n1*100);
    n2=n2/50;
    n3=n1-(n2*50);
    n3=n3/20;
    n4=n2-(n3*20);
    n4=n4/10;
    n5=n3-(n4*10);
    n5=n5/5;
    n6=n4-(n5*5);
    n6=n6/2;

    printf("%d nota(s) de R$ 100.00\n",n1);
    printf("%d nota(s) de R$ 50.00\n",n2);
    printf("%d nota(s) de R$ 20.00\n",n3);
    printf("%d nota(s) de R$ 10.00\n",n4);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n6);
}
