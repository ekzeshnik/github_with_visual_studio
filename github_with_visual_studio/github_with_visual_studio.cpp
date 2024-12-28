#include <iostream>
#include<cctype>
#include<cmath>
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

int addAllInputNumbers() {
    long double inputNumber, sum = 0;

    while (true) {
        std::cout << "Enter a number (0 to exit): ";
        std::cin >> inputNumber;

        if (inputNumber == 0) {
            break;
        }

        sum += inputNumber;
        std::cout << "Current sum: " << sum << std::endl;
    }

    return 0;
}

int print_sum_of_all_odd_or_even_or_prime_nums_in_range() {
    int rangeBeginning, rangeEnd, isNumberPrime, isNumberOdd, userChoice, sum = 0;

    std::cout << "Enter the range (ex: 1 20): ";
    std::cin >> rangeBeginning >> rangeEnd;
    std::cout << std::endl;

    if (rangeBeginning > rangeEnd) {
        std::cout << "Beginning of the range cannot be bigger from the end.\n";
        exit(0);
    }

    std::cout << "What sum would you like to output?\n" << " 1) Summ of all odd numbers from your range\n 2) Summ of all even numbers from your range\n 3) Summ of all prime numbers from your range \nChoice: ";
    std::cin >> userChoice;

    switch (userChoice) {
        case 1:
            for (int checkIfNumberIsOdd = rangeBeginning; checkIfNumberIsOdd <= rangeEnd; checkIfNumberIsOdd++) {
                if (checkIfNumberIsOdd % 2 != 0) {
                    sum += checkIfNumberIsOdd;
                }
            }
            std::cout << "\nSum of all odd numbers in the range from " << rangeBeginning << " to " << rangeEnd << " is " << sum << std::endl;
            break;

        case 2:
            for (int checkIfNumberIsEven = rangeBeginning; checkIfNumberIsEven <= rangeEnd; checkIfNumberIsEven++) {
                if (checkIfNumberIsEven % 2 == 0) {
                    sum += checkIfNumberIsEven;
                }
            }
            std::cout << "\nSum of all even numbers in the range from " << rangeBeginning << " to " << rangeEnd << " is " << sum << std::endl;
            break;

        case 3:
            for (int checkIfNumberIsPrime = rangeBeginning; checkIfNumberIsPrime <= rangeEnd; checkIfNumberIsPrime++) {
                int sqrtDividers = std::sqrt(checkIfNumberIsPrime);
                bool isNumberPrime = true;
                
                if (checkIfNumberIsPrime == 1) {
                    continue;
                }

                for (int allDividers = 2; allDividers <= sqrtDividers; allDividers++) {
                    if (checkIfNumberIsPrime % allDividers == 0) {
                        isNumberPrime = false;
                        break;
                    }
                }
                if (isNumberPrime) {
                    std::cout << checkIfNumberIsPrime << std::endl;
                    sum += checkIfNumberIsPrime;
                } 
            }
            std::cout << "\nSum of all prime numbers in the range from " << rangeBeginning << " to " << rangeEnd << " is " << sum << std::endl;
            break;

        default:
            std::cout << "There is no " << userChoice << " option.\n";
            exit(0);
    }
    return 0;
}

int printPyramidFromNumbers() {
    int pyramidHeight;

    std::cout << "Enter pyramid height: ";
    std::cin >> pyramidHeight;

    if (pyramidHeight > 0)
        for (int changingPyramidHeight = pyramidHeight; changingPyramidHeight > 0; changingPyramidHeight--) {
            for (int pyramidNumbers = 1; pyramidNumbers <= changingPyramidHeight; pyramidNumbers++) {
                std::cout << pyramidNumbers << " ";
            }
            std::cout << std::endl;
        }

    else if (pyramidHeight < 0) {
        for (int changingPyramidHeight = -pyramidHeight; changingPyramidHeight > 0; changingPyramidHeight--) {
            for (int pyramidNumbers = 1; pyramidNumbers <= changingPyramidHeight; pyramidNumbers++) {
                std::cout << pyramidNumbers << " ";
            }
            std::cout << std::endl;
        }

        std::cout << '0' << std::endl;

        for (int changingPyramidHeight = -1; changingPyramidHeight >= pyramidHeight; changingPyramidHeight--) {
            for (int pyramidNumbers = -1; pyramidNumbers >= changingPyramidHeight; pyramidNumbers--) {
                std::cout << pyramidNumbers << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}

int checl_if_number_is_even_with_ternary_operator() {
    long int inputNumberToCheck;
    bool isNumberEvenTernaryOperator;

    std::cout << "Enter a number: ";
    std::cin >> inputNumberToCheck;

    isNumberEvenTernaryOperator = (inputNumberToCheck % 2 == 0) ? true : false;

    if (isNumberEvenTernaryOperator) {
        std::cout << inputNumberToCheck << " is even." << std::endl;
    }
    else if (isNumberEvenTernaryOperator) {
        std::cout << inputNumberToCheck << " is odd." << std::endl;
    }

    return 0;
}

int print_sum_of_pyramid() {
    int sumPyramidHeight, sumOfPyramidElements;

    std::cout << "Enter pyramid height: ";
    std::cin >> sumPyramidHeight;

    if (sumPyramidHeight > 0)
        for (int sumChangingPyramidHeight = 1; sumChangingPyramidHeight <= sumPyramidHeight; sumChangingPyramidHeight++) {
            sumOfPyramidElements = 0;
            for (int sumPyramidNumbers = 1; sumPyramidNumbers <= sumChangingPyramidHeight; sumPyramidNumbers++) {
                sumOfPyramidElements += sumPyramidNumbers;
                std::cout << sumPyramidNumbers << " ";
            }
            std::cout << "= " << sumOfPyramidElements;
            std::cout << std::endl;
        }
    else {
        std::cout << sumPyramidHeight << " creates error in this code. Maybe this is negative integer, zero or non digit.";
    }
    return 0;
}

int forLoopWithList() {
    for (int values : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
        std::cout << values << " ";
    }
    std::cout << std::endl;

    for (char values : {'a', 'b', 'c', 'd'}) {
        std::cout << values << " ";
    }

    return 0;
}

int isPalindrome(int number) {
    int originalNumber = number, reversedNuber = 0;

    while (number > 0) {
        int lastElementOfNumber = number % 10;
        reversedNuber = reversedNuber * 10 + lastElementOfNumber;
        number /= 10;
    }

    std::cout << "Original number: " << originalNumber << std::endl;
    std::cout << "Reversed number: " << reversedNuber << std::endl;

    return 0;
}

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    isPalindrome(number);
}

