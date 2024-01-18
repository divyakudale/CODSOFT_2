#include <iostream>

int main() {
    char choice;

    do {
        // Variables to store user input and the result
        double num1, num2, result;
        char operation;

        // Ask the user to input two numbers
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        // Ask the user to choose an operation
        std::cout << "Choose an operation (+, -, *, /): ";
        std::cin >> operation;

        // Perform the selected operation and display the result
        switch (operation) {
            case '+':
                result = num1 + num2;
                std::cout << "Result: " << result << std::endl;
                break;

            case '-':
                result = num1 - num2;
                std::cout << "Result: " << result << std::endl;
                break;

            case '*':
                result = num1 * num2;
                std::cout << "Result: " << result << std::endl;
                break;

            case '/':
                // Check for division by zero
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "Result: " << result << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                }
                break;

            default:
                std::cout << "Error: Invalid operation." << std::endl;
        }

        // Ask the user if they want to continue
        std::cout << "Do you want to perform another operation? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Goodbye! Thanks for using the calculator." << std::endl;

    return 0;
}