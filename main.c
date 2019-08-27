#include <stdio.h>
#include <stdlib.h>
#include"TaskCiOne.h"
int main()
{
    int select, cm, iinch;
    double inch, dcm, fahr, celsius;

    menu();

    while((select = get_int()) != 9)
    {
        switch(select)
        {
            case 1 : average();
                break;
            case 2 : printf("Enter a value for inches: \n");
                        scanf("%d", &iinch);
                        dcm = inches_to_centimeters(iinch);
                        printf("%d inches = %.2lf cm\n", iinch, dcm);
                break;
            case 3 : printf("Enter a value for centimeters: \n");
                        scanf("%d", &cm);
                        inch = centimeters_in_inches(cm);
                    printf("%d cm = %.2lf inches\n", cm, inch);
                break;
            case 4 : printf("Enter the Fahrenheit temperature value\n");
                        scanf("%lf", &fahr);
                        celsius = Fahrenheit_to_Celsius(fahr);
                    printf("%.2lf fahr =  %.2lf celsius\n", fahr, celsius);
                break;
            case 5 : printf("Enter the Celsius temperature value\n");
                        scanf("%lf", &celsius);
                        fahr = Celsius_to_Fahrenheit(celsius);
                     printf("%.2lf celsius =  %.2lf fahrenheit\n", celsius, fahr);
                break;
            case 9 :printf("Nine\n");
                break;
            default : printf("Oops. Something went wrong. Do not despair and keep a good mood.\n");
                break;
        }
    }
    printf("Good day!\n");
    return 0;
}
