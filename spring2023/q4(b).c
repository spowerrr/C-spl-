#include <stdio.h>
#include <math.h>

// Function to calculate weight and milk production of a cow
void calculateCowInfo(int x, double a, double b, double c, double d, double *weight, double *milkProduction) {
    double e = 2.71828; // Euler's number (approximate value)
    
    // Calculate weight
    double w = c * (1 - pow(e, -d * x));
    
    // Calculate milk production
    *milkProduction = a * pow(w, b);
    
    // Assign weight value to the pointer
    *weight = w;
}

int main() {
    int x = 35;
    double a = 0.87, b = 0.45, c = 800, d = 3.5;
    double weight, milkProduction;

    // Call the function to calculate cow information
    calculateCowInfo(x, a, b, c, d, &weight, &milkProduction);

    // Display the results
    printf("Weight of the cow: %.2f\n", weight);
    printf("Average daily milk production: %.2f\n", milkProduction);

    return 0;
}
