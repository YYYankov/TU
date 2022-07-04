

#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned lower,upper,step;
    float fahr;
    int cel;

    printf("Input Lower: ");
    scanf("%d",&lower);
    printf("Input upper: ");
    scanf("%d",&upper);
    printf("Input step: ");
    scanf("%d",&step);

    printf("Celsius t0 Fahrenheit Convertor\n");
    printf("Celsius\tFahrenheit\n");


    for(cel=lower;cel<=upper;cel+=step){
        fahr=cel*9./5+32;
        printf("%d\t%g\n",cel,fahr);
    }





    //printf("Hello world!\n");
    return 0;
}
