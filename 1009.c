#include <stdio.h>

int main() {

    char name[100];
    double ss,vs,total;
    scanf("%s",name);
    scanf("%lf",&ss);
    scanf("%lf",&vs);

    total=(ss+(vs*.15));

    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
