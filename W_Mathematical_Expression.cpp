#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;

    // Read input
    cin >> A >> S >> B >> Q >> C;

    // Evaluate based on the operator
    int result;
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else if (S == '*') {
        result = A * B;
    }

    // Check if the expression is correct
    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl; // Print the correct answer
    }

    return 0;
}
