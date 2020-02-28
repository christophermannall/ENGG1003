#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int k;  // Declare variable k as integer
    scanf("%d", &k);    // Reads formatted input from stdin.
    printf("You entered: %d\n", k); // Print to stdout. %d formats int.
    return 0;   // Returns an int once function completed.

    int k;
    printf("Enter an integer: ");
    scanf("%d", &k);
    k = (0.5*k);
    printf("That integer doubled is: %d\n", k);
    return 0;
    */
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}
