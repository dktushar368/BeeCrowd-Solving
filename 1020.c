#include <stdio.h>

int main() {

    int N,y,m,d;
    scanf("%d",&N);
    y=N/365;
    d=N-(y*365);
    m=d/30;
    d=d-(m*30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}
