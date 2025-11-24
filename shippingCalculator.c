#include "shippingFunctions.h"

int main() {
    showMenu();                     // Calling function #1 (no input, no output)
    double weight = getPackageWeight();    // Calling function #2 (no input, has output)
    calculateAndPrintCost(weight);  // Calling function #3 (has input, no output)
    return 0;
}