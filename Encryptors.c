//Printing words in encrypted form using c
#include<stdio.h>
int main()
{
    char a[5000];
    int i,j;
    printf("\n Enter any sentence to encrypt:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        j=a[i]+1;
        printf("%c",j);
    }
    return 0;
}
