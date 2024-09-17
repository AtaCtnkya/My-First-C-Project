#include <iostream>

int main() {

    double earthWeight = 0.0;
    int planetNumber = 0;

    std::cout << "What is your weight on earth?\n";
    std::cin >> earthWeight;

    std::cout << "\nHere is the planet information!\n1: Mercury\n2: Venus\n3: Mars\n4: Jupiter\n5: Saturn\n6: Uranus\n7: Neptune\nPlease enter a number for the planet you'd like to fight on!";
    std::cin >> planetNumber;

    if (planetNumber == 1) {
        earthWeight = earthWeight * 0.38;
    } else if (planetNumber == 2) {
        earthWeight = earthWeight * 0.91;
    } else if (planetNumber == 3) {
        earthWeight = earthWeight * 0.38;
    } else if (planetNumber == 4) {
        earthWeight = earthWeight * 2.34;
    } else if (planetNumber == 5) {
        earthWeight = earthWeight * 1.06;
    } else if (planetNumber == 6) {
        earthWeight = earthWeight * 0.92;
    } else if (planetNumber == 7) {
        earthWeight = earthWeight * 1.19;
    } else {
        std::cout << "Invalid planet number entered.\n";
        return 1;  // Exit if invalid planet number
    }
    std::cout << "Your weight on the selected planet is: " << earthWeight << " units.\n";

}