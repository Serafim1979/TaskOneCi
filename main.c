#include <stdio.h>
#include <stdlib.h>
#include"TaskCiOne.h"
int main()
{
    int select, cm, iinch;
    double inch, dcm, fahr, celsius, R, r, square;
    double leg_one, leg_two, h, surface_area, volume;
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
            case 6 : printf("The calculation of the square ring\n");
                    printf("To calculate, enter a value for the outer and inner radii.\n");
                    printf("Enter a value for the outer radius R = ");
                    scanf("%lf", &R);
                    printf("Enter a value for the internal radius r = ");
                    scanf("%lf", &r);
                    square = square_ring(R, r);
                    printf("The area of the ring is: .2%lf", square);
                break;
            case 7 : printf("Calculating the perimeter of a right triangle two legs.\n");
                    printf("Enter the value of the first leg: ");
                    scanf("%lf", &leg_one);
                    printf("Enter the value of the second leg: ");
                    scanf("%lf", &leg_two);
                    square = square_triangle(leg_one, leg_two);
                    printf("The area of a right triangle is: .2%lf", square);
                break;
            case 8: printf("Calculation of surface area and cylinder volume (radius r, height h).\n");
                    printf("To calculate the surface area and volume of the cylinder specify a value\n");
                    printf(" for the radius and height of the cylinder.\n");
                    printf("Enter a value for radius R = ");
                    scanf("%lf", &R);
                    printf("Enter a value for cylinder height h = ");
                    scanf("%lf", &h);
                    surface_area = cylinder_surface_area(R, h);
                    volume = cylinder_volume(R, h);
                    printf("Cylinder surface area = %.2lf\nCylinder volume = %.2lf", surface_area, volume);
                break;
            case 9 :printf("Exit\n");
                break;
            default : printf("Oops. Something went wrong. Do not despair and keep a good mood.\n");
                break;
        }
        menu();
    }
    printf("Good day!\n");
    return 0;
}
