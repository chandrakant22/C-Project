#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,lp=1,p=0,stot=0,gtot=0;
    printf("WELCOME TO HOTEL\n");

    while(lp)
    {
    printf("1.Samosa\n");
    printf("2.Tea\n");
    printf("3.Dosa\n");
    printf("0.Exit\n");
    printf("Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("samosa\n");
        printf("Enter number of plats: ");
        scanf("%d",&p);
        stot=p*20;
        printf("Sub total : %d\n",stot);
        gtot+=stot;
        break;
    case 2:
        printf("tea\n");
        printf("Enter number of Cups: ");
        scanf("%d",&p);
        stot=p*10;
        printf("Sub total : %d\n",stot);
        gtot+=stot;
        break;
    case 3:
        printf("dosa\n");
        printf("Enter number of plats: ");
        scanf("%d",&p);
        stot=p*30;
        printf("Sub total : %d\n",stot);
        gtot+=stot;
        break;
    case 0:
        lp=0;
        printf("Grand total %d\n",gtot);
        printf("Thank You\n");
        break;
    default:
        printf("Wrong input!\n");
        break;
    }

    }
    return 0;
}
