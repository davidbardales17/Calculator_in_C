// include the regular library
// remove the error messag
#include <stdio.h>
// include the library for the function
#include <math.h>
// define the main function



int main() {
    int x;
    int y;
    int input;
    int gameIsrunning = 1;
	// add variable to determine if the game is running
    char continueInput = 0;
	
	while (gameIsrunning == 1) {


        printf("Do you want to add, subtract, multiply, or divide? (1, 2, 3, 4): ");
        scanf_s("%d", &input);

        if (input == 1) {
            printf("Enter the first number: ");
            scanf_s("%d", &x);
            printf("Enter the second number: ");
            scanf_s("%d", &y);
            int result = x + y;
            printf("The result is: %d", result);

        }
        else if (input == 2) {

            printf("Enter the first number: ");
            scanf_s("%d", &x);
            printf("Enter the second number: ");
            scanf_s("%d", &y);
            int result = x - y;
            printf("The result is: %d", result);

        }
        else if (input == 3) {

            printf("Enter the first number: ");
            scanf_s("%d", &x);
            printf("Enter the second number: ");
            scanf_s("%d", &y);
            int result = x * y;
            printf("The result is: %d", result);

        }
        else if (input == 4) {

            printf("Enter the first number: ");
            scanf_s("%d", &x);
            printf("Enter the second number: ");
            scanf_s("%d", &y);
            int result = x / y;
            printf("The result is: %d", result);

        }
        else {
            printf("Invalid input");
        }

		printf("\n Do you want to continue? (y/n): ");
		
		scanf_s("%c", &continueInput);
		
		if (continueInput == 'n') {
			gameIsrunning = 0;
		}
        else
		{
			gameIsrunning = 1;
		}
	}   

         return 0;

}