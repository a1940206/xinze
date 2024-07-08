#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    printf("Enter the number of temperatures: ");
    scanf("%d", &count);

    // Dynamically allocate memory for the temperatures array
    double *temperatures = (double *)malloc(count * sizeof(double));
    if (temperatures == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read temperatures
    printf("Enter the temperatures: ");
    for (int i = 0; i < count; i++) {
        scanf("%lf", &temperatures[i]);
    }

    // Print temperatures in reverse order
    printf("Temperatures in reverse order: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%.1f ", temperatures[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(temperatures);

    return 0;
}