#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Hello from C++!" << endl;

    if (argc > 1) {
        cout << "Program arguments:" << endl;
        for (int i = 1; i < argc; i++) {
            cout << argv[i] << endl;
        }
    }

    return 0;
}