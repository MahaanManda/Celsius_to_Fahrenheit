#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int elements = 20;
    double temperaturesCel[elements];
    double sum = 0;
    double avg = 0;

    bool isQuit = false;
    char quitChar = 'c';

    int i; //loop counter

//populate array
    for (i = 0; i < elements; ++i) {
        printf("Enter %dst degree in Celsius: ", i+1);
        scanf("%lf", &temperaturesCel[i]);
    }

    printf("Converting Temperatures to Fahrenheit....\n");
// convert temps to Fahrenheit
    for (i = 0; i < elements; ++i) {
        temperaturesCel[i] = (temperaturesCel[i] * 1.8) + 32;
        printf("%lf, ", temperaturesCel[i]);
        sum = temperaturesCel[i] + sum;
    }
    //compute average
    avg = sum/elements;

    printf("\nAll temperatures processed\n");
    printf("The average of the 20 temperatures in Fahrenheit is: %0.2lf\n", avg);




    while (isQuit != true) { 

        printf("Type q to quit");
        scanf(" %c", quitChar);

        if(quitChar == 'q'){
            isQuit = true;
            break;

        }

    }




    return 0;

}