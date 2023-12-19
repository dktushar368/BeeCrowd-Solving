#include<stdio.h>
int main()
{
    int n,i,temp=0;//temp charau kora jai
    scanf("%d",&n);

    for(i=2;i<=n/2;i++){
        if(n%i==0)
        {
            printf("%d is not a prime number\n",n);
            //temp=1;
            break;
        }
        else
        {
            printf("%d is a prime number\n",n);
            //temp=0;
            break;
        }
    }
    return 0;
}
