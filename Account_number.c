#include <stdio.h>

int main()
{
    int sno, i;
    struct Account
    {

        int bal, depos, withdral;
    } a[3];
    for (i = 0; i < 3; i++)

    {
        printf("Enter depos and withdral");
        scanf("%d  %d", &a[i].depos, &a[i].withdral);
        a[i].bal = a[i].depos - a[i].withdral;
    }

    printf("enter account sno");
    scanf("%d", &sno);
    printf("last balance %d$ last deposit%d$ last withdral%d$ ", a[sno - 1].bal, a[sno - 1].depos, a[sno - 1].withdral);
}
