#include <stdio.h>
#include <math.h>
int main() {

    int option = 0, amountOfNumbers;
    double result = 0;

    printf("Welcome to a basic C calculator.");

    //Looping until user wants to stop.
    do {
        printf("\n\nChoose what you want to do:\n");
        printf("Addition(1)\n"
               "Subtraction(2)\n"
               "Multiplication(3)\n"
               "Division(4)\n"
               "Pow(5)\n"
               "SquareRoot(6)\n"
               "Exit(any other button)\n");
        printf("\nOption selected: ");
        scanf("%d", &option);

        //basic menu.
        switch (option) {
            case 1: {
                printf("How many numbers will you use?\n");
                scanf("%d", &amountOfNumbers);

                if (amountOfNumbers < 2) {
                    do {
                        printf("You need as minimum 2 numbers.\n");
                        scanf("%d", &amountOfNumbers);
                    } while (amountOfNumbers < 2);
                }

                double listOfNumbers[amountOfNumbers];
                double number;

                printf("Write those numbers: \n");
                for (int i = 1; i <= amountOfNumbers; i++) {
                    scanf("%lf", &number);
                    listOfNumbers[i-1] = number;
                }

                for (int i = 1; i <= amountOfNumbers; i++) {
                    result = result + listOfNumbers[i-1];
                }
                printf("***********************");
                printf("\nThe result is: %.2f", result);
                printf("\n***********************");

                break;
            }
            case 2: {
                printf("How many numbers will you use?\n");
                scanf("%d", &amountOfNumbers);

                if (amountOfNumbers < 2) {
                    do {
                        printf("You need as minimum 2 numbers.\n");
                        scanf("%d", &amountOfNumbers);
                    } while (amountOfNumbers < 2);
                }

                double listOfNumbers[amountOfNumbers];
                double number;

                printf("Write those numbers: \n");
                for (int i = 1; i <= amountOfNumbers; i++) {
                    scanf("%lf", &number);
                    listOfNumbers[i-1] = number;
                }

                result = listOfNumbers[0];
                for (int i = 1; i <= amountOfNumbers; i++) {
                    result = result - listOfNumbers[i];
                }
                printf("***********************");
                printf("\nThe result is: %.2f", result);
                printf("\n***********************");

                break;
            }
            case 3: {
                printf("How many numbers will you use?\n");
                scanf("%d", &amountOfNumbers);

                if (amountOfNumbers < 2) {
                    do {
                        printf("You need as minimum 2 numbers.\n");
                        scanf("%d", &amountOfNumbers);
                    } while (amountOfNumbers < 2);
                }

                double listOfNumbers[amountOfNumbers];
                double number;

                printf("Write those numbers: \n");
                for (int i = 1; i <= amountOfNumbers; i++) {
                    scanf("%lf", &number);
                    listOfNumbers[i-1] = number;
                }

                result = 1;
                for (int i = 1; i <= amountOfNumbers; i++) {
                    result = result * listOfNumbers[i-1];
                }

                printf("***********************");
                printf("\nThe result is: %.2f", result);
                printf("\n***********************");
                break;
            }
            case 4: {
                double a,b;
                printf("Write number A and B\n");
                scanf("%lf", &a);
                scanf("%lf", &b);

                printf("***********************");
                printf("\nThe result is: %.2f", (a/b));
                printf("\n***********************");

                break;
            }
            case 5: {
                double a,b;
                printf("Write base:");
                scanf("%lf", &a);
                printf("Write elevation:");
                scanf("%lf", &b);

                printf("***********************");
                printf("\nThe result is: %.2f", pow(a,b));
                printf("\n***********************");

                break;
            }
            case 6: {
                double a;
                printf("Write number:");
                scanf("%lf", &a);

                printf("***********************");
                printf("\nThe result is: %.2f", sqrt(a));
                printf("\n***********************");
                break;
            }
            default: {
                printf("Closing...");
                break;
            }
        }
    }while(option >=  1 && option <= 6);
    return 0;
}