#include<stdio.h>
/* Print table of fahr and celsius from 0 to 300 degrise */
main()
{
    float fahr, celcsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcsius = upper;
    printf("celsius\t fahr\n");
    while (celcsius >= lower)
    {
        fahr = (celcsius * (9.0/5.0)) + 32.0;
        printf("%3.0f\t%6.2f\n", celcsius, fahr);
        celcsius -= step;
    }
    
}