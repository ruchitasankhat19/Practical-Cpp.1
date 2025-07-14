#include <iostream>
using namespace std;

int main() {
    int number = 57;

    cout << "a. The number is : " << number << endl;

    cout << "b. After post increment by 1 the number is : " << number++ << endl;
    cout << "c. After pre increment by 1 the number is : " << ++number << endl;

    number = number + 1;
    cout << "d. After increasing by 1 the number is : " << number << endl;

    cout << "e. After post decrement by 1 the number is : " << number-- << endl;
    cout << "f. After pre decrement by 1 the number is : " << --number << endl;

    number = number - 1;
    cout << "g. After decreasing by 1 the number is : " << number << endl;

    return 0;
}
