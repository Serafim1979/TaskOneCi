#include <stdio.h>
#include <stdlib.h>
#include"TaskCiOne.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu()
{
    printf("\n\tSelect the desired action.\n");
    printf("\n**************************************************************************************\n");
    printf("\n1.Calculate the arithmetic mean of the two values x1 and x2.\n");
    printf("2.Translate the length specified in inches into centimeters (10 inches = 254 mm).\n");
    printf("3.Translate the length specified in centimeters into inches.\n");
    printf("4.Convert temperature from Fahrenheit to Celsius.\n");
    printf("5.Convert the temperature from Celsius to Fahrenheit.\n");
    printf("6.Calculate the area of the ring (outer radius R, inner-r).\n");
    printf("7.Calculate the perimeter and area of a right triangle with legs a and b.\n");
    printf("8.Calculate the surface area and volume of the cylinder (radius r, height h).\n");
    printf("9. Exit.\n");
    printf("\n**************************************************************************************\n");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
int get_int(void)
{
    int input;
    char ch;
    while(scanf("%d", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not integer. Invalid input.\n");
        printf("Please enter an integer by selecting from the menu items.\n");
    }
    return input;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void average(void)
{
    char ch;
    int x1, x2;
    double avr;

    printf("Enter a value of x1: ");

    while(scanf("%d", &x1) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not integer. Invalid input.\n");
        printf("Please enter an integer\n");
    }

    printf("Enter a value of x2: ");

    while(scanf("%d", &x2) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not integer. Invalid input.\n");
        printf("Please enter an integer\n");
    }

    avr = (x1 + x2)/2;
    printf("Average x1 and x2 = %.2lf\n", avr);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
double centimeters_in_inches(int cm)
{
    return cm * 0.39;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
double inches_to_centimeters(int inch)
{
    return inch * 2.54;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
double Fahrenheit_to_Celsius(double fahr)
{
    double c;
    c = (5.0/9.0)*(fahr-32.0);
    return c;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
double Celsius_to_Fahrenheit(double cels)
{
    return 1.8 * cels + 32;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
