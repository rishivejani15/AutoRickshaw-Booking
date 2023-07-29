#include<stdio.h>
void main()
{
    int num1,time,fare;
    float kilo;
    printf("Welcome to Rapido !!!\n\n");
    printf("Press 1 for Day Booking\n");
    printf("Press 2 for Night Booking\n\n");
    printf("Choose an option: ");
    scanf("%d",&num1);
    printf("\nEnter the distance: ");
    scanf("%f",&kilo);
    printf("Enter the waiting time: ");
    scanf("%d",&time);
    switch(num1)
    {
        case 1:
            if(kilo>=0 && kilo<=1.5)
            {
                if(time>=0 && time<=5)
                {
                    fare=23+time;
                    printf("\nTotal fare is: %d\n",fare);
                }
                else if(time>5 && time<=10)
                {
                    fare=23+time*2;
                    printf("\nTotal fare is: %d\n",fare);
                }
                else
                {
                    printf("\nCannot wait for more than 10 minutes within 1.5 km !!!\n");
                }
            }
            else
            {
                kilo=(kilo-1.5)*10;
                fare=23+kilo+time;
                printf("\nTotal fare is: %d\n",fare);
            }
            break;

        case 2:
            if(kilo>=0 && kilo<=1.5)
            {
                time=time*2;
                fare=29+time;
                printf("\nTotal fare is: %d\n",fare);
            }
            else
            {
                kilo=(kilo-1.5)*20;
                fare=29+kilo+time*2;
                printf("\nTotal fare is: %d\n",fare);
            }
            break;

        default:
            printf("\nInvalid Input !!!");
    }
}
