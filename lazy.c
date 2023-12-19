#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int sz=strlen(s);
    for(int i=0;i<sz;i++)
    {
        char single =s[i];
        if(single=='A' || single=='a' || single=='E' || single=='e' || single=='I' || single=='i' || single=='O' || single=='o' || single=='U' || single=='u' || single=='Y' || single=='y')

        {
            continue;
        }
        else
        {
            printf("/%c",tolower(single));
        }
    }
return 0;
}
