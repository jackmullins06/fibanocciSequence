#include <iostream>

int promptForInput() {
    int nth_term;

    std::cout << "Please enter the number you would like the program to calculate the Fibanocci Sequence up to: " << std::endl;
    std::cin >> nth_term;

    return nth_term;
}

void CalculateSequence(int nth_term) {
    long firstTerm = 0, secondTerm = 1;

    std::cout << firstTerm << std::endl; 
    std::cout << secondTerm << std::endl; 

    while(secondTerm <= nth_term) {
        long thirdTerm = firstTerm + secondTerm;

        std::cout << thirdTerm << std::endl;

        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }
}


int main() {
    int nth_term = promptForInput();

    CalculateSequence(nth_term);
    return 0;
}