#include <iostream>

int main() {
    double earthWeight = 0.0;
    int planetNumber = 0;

    std::cout << "What is your weight on earth?\n";
    std::cin >> earthWeight;

    std::cout <<
            "\nHere is the planet information!\n1: Mercury\n2: Venus\n3: Mars\n4: Jupiter\n5: Saturn\n6: Uranus\n7: Neptune\nPlease enter a number for the planet you'd like to fight on!\n";
    std::cin >> planetNumber;

    switch (planetNumber) {
        case 1:
            earthWeight = earthWeight * 0.38;
            break;
        case 2:
            earthWeight = earthWeight * 0.91;
            break;
        case 3:
            earthWeight = earthWeight * 0.38;
            break;
        case 4:
            earthWeight = earthWeight * 2.34;
            break;
        case 5:
            earthWeight = earthWeight * 1.06;
            break;
        case 6:
            earthWeight = earthWeight * 0.92;
            break;
        case 7:
            earthWeight = earthWeight * 1.19;
            break;
        default:
            std::cout << "Invalid planet number entered.\n";
            return 1; // Exit if invalid planet number
    }

    std::cout << "Your weight on the selected planet is: " << earthWeight << " units.\n";
}
