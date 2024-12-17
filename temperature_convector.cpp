#include<stdio.h>
/* Print table of fahr and celsius from 0 to 300 degrise */
main()
{
    float fahr, celcsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("fahr\t celsius\n");
    /*while (fahr <= upper)
    {
        celcsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celcsius);
        fahr += step;
    }
    */
   for (fahr = 300; fahr >= 0; fahr -= 20){
    printf("%3.0f\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32.0));
   }
    
}