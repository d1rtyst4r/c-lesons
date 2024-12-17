#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
/* Print table of fahr and celsius from 0 to 300 degrise */
main()
{
    int fahr;
    printf("fahr\t celsius\n");
    /*while (fahr <= upper)
    {
        celcsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celcsius);
        fahr += step;
    }
    */
   for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
    printf("%3.0f\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32.0));
   }
    
}