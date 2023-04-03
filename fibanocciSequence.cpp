#include <iostream>

void CalculateSequence(int nth_term) {
    long currentTerm = 0, nextTerm = 1;

    for (int i = 1; i <= nth_term; i++) {
        std::cout << currentTerm << " ";

        long tempTerm = currentTerm + nextTerm;
        currentTerm = nextTerm;
        nextTerm = tempTerm;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    
    CalculateSequence(n);

    return 0;
}
