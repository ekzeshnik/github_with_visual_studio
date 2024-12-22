#include <iostream>
#include<cctype>

int calculator() {
    long double firstNumber, secondNumber, calculationResult;
    int choice;

    std::cout << "Options: \n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n Your choice: ";
    std::cin >> choice;
    std::cout << "Enter 2 numbers: ";
    std::cin >> firstNumber >> secondNumber;

    switch (choice) {
    case 1:
        calculationResult = firstNumber + secondNumber;
        std::cout << firstNumber << " + " << secondNumber << " = " << calculationResult << std::endl;
        break;

    case 2:
        calculationResult = firstNumber - secondNumber;
        std::cout << firstNumber << " - " << secondNumber << " = " << calculationResult << std::endl;
        break;

    case 3:
        calculationResult = firstNumber * secondNumber;
        std::cout << firstNumber << " * " << secondNumber << " = " << calculationResult << std::endl;
        break;

    case 4:
        calculationResult = firstNumber / secondNumber;
        std::cout << firstNumber << " / " << secondNumber << " = " << calculationResult << std::endl;
        break;

    default:
        std::cout << "There is no " << choice << " option." << std::endl;
    }
    return 0;
}

int vowelOrConsonant() {
    char userLetter;

    std::cout << "Enter any letter: ";
    std::cin >> userLetter;

    userLetter = std::tolower(userLetter);

    switch (userLetter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        std::cout << userLetter << " is vowel." << std::endl;
        break;

    default:
        if (std::isalpha(userLetter)) {
            std::cout << userLetter << " is consonant." << std::endl;
        }
        else {
            std::cout << userLetter << " is not a letter." << std::endl;
        }
    }
    return 0;
}

int printTriangle() {
    int triangleHeight, i, j;

    std::cout << "Enter height of your triangle: ";
    std::cin >> triangleHeight;

    for (i = 0; i <= triangleHeight; i++) {
        for (j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}

int printAllNumbersInRange() {
    int beginningOfTheRange, endOfTheRange;

    std::cout << "Enter range borders separated by space (ex. 3 10): ";
    std::cin >> beginningOfTheRange >> endOfTheRange;

    for (int numbersFromRange = beginningOfTheRange; numbersFromRange <= endOfTheRange; numbersFromRange++) {
        std::cout << numbersFromRange << std::endl;
    }

    return 0;
}

int printAllNumbersInRangeWithStep() {
    int beginningOfTheRangeWithStep, endOfTheRangeWithStep, step;

    std::cout << "Enter range borders separated by space (ex. 3 10): ";
    std::cin >> beginningOfTheRangeWithStep >> endOfTheRangeWithStep;
    std::cout << "Now enter step: ";
    std::cin >> step;

    for (int numbersFromRangeWithStep = beginningOfTheRangeWithStep; numbersFromRangeWithStep <= endOfTheRangeWithStep; numbersFromRangeWithStep += step) {
        std::cout << numbersFromRangeWithStep << std::endl;
    }

    return 0;
}

int printAllNumbersInRangeWithStepUsingWhile() {
    int beginningOfTheRangeWithStepUsingWhile, endOfTheRangeWithStepUsingWhile, step;

    std::cout << "Enter range borders separated by space (ex. 3 10): ";
    std::cin >> beginningOfTheRangeWithStepUsingWhile >> endOfTheRangeWithStepUsingWhile;
    std::cout << "Now enter step: ";
    std::cin >> step;

    while ((beginningOfTheRangeWithStepUsingWhile += step) <= endOfTheRangeWithStepUsingWhile) {
        std::cout << beginningOfTheRangeWithStepUsingWhile << std::endl;
    }
    return 0;
}

int main()
{
    printAllNumbersInRangeWithStepUsingWhile();
}

