#include <iostream>
using std::cout;
using std::cin;

int main() {

    int num;
    cout << "Enter a number to know the tempera>
    cin >> num;

    if (num < 0) {
      cout << "ICE\n";
    } else if (num <= 100) {
      cout << "WATER\n";
    } else {
      cout << "STEAM\n";
    }
    return 0;
}