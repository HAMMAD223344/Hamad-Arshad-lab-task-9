#include <iostream>
using namespace std;

void MultiplesOf15(int multiplier, int limit) {

    if (multiplier > limit) {
        return;
    }


    cout << "15 * " << multiplier << " = " << 15 * multiplier << endl;


    MultiplesOf15(multiplier + 1, limit);
}

int main() {
    int limit;

   
    cout << "Enter the limit for the multiplication table of 15: ";
    cin >> limit;

    MultiplesOf15(1, limit);

    return 0;
}
