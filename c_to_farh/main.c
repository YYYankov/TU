#include <stdio.h>
#include <stdlib.h>
#define STEP 20
int main()
{
    const int LOWER=0;
    int upper=100;
    float fahr;
    int cel;

    printf("Celsius t0 Fahrenheit Convertor\n");
    printf("Celsius\tFahrenheit\n");

    for(cel-LOWER;cel<=upper;cel+=STEP){
        fahr=cel*9./5+32;
        printf("%d\t%g\n",cel,fahr);
    }





    //printf("Hello world!\n");
    return 0;
}
