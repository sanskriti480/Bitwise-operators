//Sanskriti Khairnar
//PRN - 24070123054
//Batch - A2
//Experiment 4

#include <iostream>
using namespace std;

int main() {
    int a=80 , b = 98 , bit_to_be_set , bit_to_be_reset , set , reset;
    cout << "Enter the bit to be set: ";
    cin >> bit_to_be_set;
    set = a | (1<<bit_to_be_set);
    cout << "The set is: " << set << endl;
    
    cout << "Enter the bit to be reset: ";
    cin >> bit_to_be_reset;
    reset = b & (~(1<<bit_to_be_reset));
    cout << "The reset is: " << reset;

    return 0;
}

//Output

//Enter the bit to be set: 4
//The set is: 80
//Enter the bit to be reset: 5
//The reset is: 66
