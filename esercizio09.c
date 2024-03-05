#include <stdio.h>
int main ()
{
    int a;
    printf("inserisci un numero");
    scanf("%d", &a);
    if(a>5)
    {
        printf("uguale a 10");
    }
    else if (a==10)
    {
        printf("maggiore di 5");
    }
    else if(a==5)
    {
        printf("uguale di 5");
    }
    else
    {
        printf("minore di 5");
    }
}

