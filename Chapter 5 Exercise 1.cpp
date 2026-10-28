#include <iostream>

using namespace std;

int main() {
    for (int i = 32; i <= 127; i++) {
        cout << static_cast<char>(i) << " ";

        if ((i - 32 + 1) % 16 == 0) {
            cout << endl;
        }
    }

    return 0;
}