//Sanskriti Khairnar
//PRN - 24070123054
//Batch - A2
//Experiment 4

#include <iostream>
using namespace std;

int main() {
    int a = 32;
    int b = 16;
    
    int bitwise_and = a&b;
    cout << "AND: " << bitwise_and << endl;
    int bitwise_or = a|b;
    cout << "OR: " << bitwise_or << endl;
    int bitwise_not = ~b;
    cout << "NOT: " << bitwise_not << endl;
    int bitwise_xor = a^b;
    cout << "XOR: " << bitwise_xor << endl;
    int bitwise_right_shift = a>>2;
    cout << "RIGHT_SHIFT: " << bitwise_right_shift << endl;
    int bitwise_left_shift = a<<2;
    cout << "LEFT_SHIFT: " << bitwise_left_shift << endl;

    return 0;
}

//Outputs

//AND: 0
//OR: 48
//NOT: -17
//XOR: 48
//RIGHT_SHIFT: 8
//LEFT_SHIFT: 128

