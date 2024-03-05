#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("inserisci 3 numeri\n");
    scanf(" %d %d %d", &a, &b, &c);
    if (a-b==b-c)
    {
        printf("si i numeri sono in sequenza");

    }
    else
    {
        printf("no i numeri non sono in sequenza");

    }
}