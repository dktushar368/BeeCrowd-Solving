#include <stdio.h>

int main() {

    int N,h,m,s;
    scanf("%d",&N);
    h=N/3600;
    s=N-(h*3600);
    m=s/60;
    s=s-(m*60);

    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
