#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);             // Get current system time
    char* dt = ctime(&now);           // Convert to string format

    cout << "Current date and time: " << dt;

    return 0;
}
