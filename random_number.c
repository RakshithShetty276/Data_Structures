#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Generate a random number
    srand(time(NULL));
    int randomNumber = rand();

    // Create a file pointer
    FILE *file;

    // Open the file in write mode
    file = fopen("random_number.txt", "w");

    if (file == NULL)

    {
        printf("Error opening the file.");
        return 1;
    }

    // Write the random number to the file
    fprintf(file, "%d", randomNumber);

    // Close the file
    fclose(file);

    printf("Random number written to file.");

 return 0;
}
