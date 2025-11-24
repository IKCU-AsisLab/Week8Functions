#include <stdio.h>

double getPackageWeight() {
    double weight;
    printf("Enter package weight (kg): ");
    scanf("%lf", &weight);
    return weight;
}

// 2) Function with no output (void)
// Prints the final shipping cost.
void printShippingCost(double cost) {
    printf("Total shipping cost: %.2f TL\n", cost);
}

// 3) Function with no input
// Shows a simple menu to the user.
void showMenu() {
    printf("=== Shipping Cost Calculator ===\n");
    printf("Cost = base fee + weight * rate per kg\n\n");
}

// 4) Function that CALLS another function inside
// Calculates cost and calls printShippingCost() internally.
void calculateAndPrintCost(double weight) {
    double cost = 15 + weight * 8; // Example: base fee 15 TL + 8 TL per kg
    printShippingCost(cost);       // Calling function #2 inside this one
}
