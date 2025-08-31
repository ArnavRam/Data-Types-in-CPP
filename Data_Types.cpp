// NAME: Arnav Ram
// PRN: 25070123503
// Exp-2

#include <iostream>
using namespace std;

int main() {
    cout << "Size in bytes:\n";
    cout << "int: " << sizeof(int) << "\n";
    cout << "float: " << sizeof(float) << "\n";
    cout << "double: " << sizeof(double) << "\n";
    cout << "char: " << sizeof(char) << "\n";
    cout << "bool: " << sizeof(bool) << "\n\n";

    int num;
    float price;
    double bigValue;
    char letter;
    bool flag;

    cout << "Enter an int: ";
    cin >> num;

    cout << "Enter a float: ";
    cin >> price;

    cout << "Enter a double: ";
    cin >> bigValue;

    cout << "Enter a char: ";
    cin >> letter;

    cout << "Enter a bool (0 for false, 1 for true): ";
    cin >> flag;

    cout << "\nYou entered:\n";
    cout << "int = " << num << "\n";
    cout << "float = " << price << "\n";
    cout << "double = " << bigValue << "\n";
    cout << "char = " << letter << "\n";
    cout << "bool = " << flag << "\n"; 

    return 0;
}

/*
Output
Size in bytes:
int: 4
float: 4
double: 8
char: 1
bool: 1

Enter an int: 8
Enter a float: 1.50
Enter a double: 3.9273
Enter a char: A
Enter a bool (0 for false, 1 for true): 1

You entered:
int = 8
float = 1.5
double = 3.9273
char = A
bool = 1

*/
