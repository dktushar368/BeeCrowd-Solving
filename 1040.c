#include <stdio.h>

int main() {
    double n1,n2,n3,n4,m1,n5,m2;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    m1=(n1+n2+n3+n4)/4;
    printf("Media: %.1lf\n",m1);
    if(m1>7.0)
        printf("Aluno aprovado.\n");
    else if(m1<5.0)
        printf("Aluno reprovado.\n");
    else
        printf("Aluno em exame.\n");

    scanf("%lf",&n5);
    printf("Nota do exame: %.1lf\n",n5);
    m2=(m1+n5)/2;
    if(m2>5.0)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",m2);

    return 0;
}
