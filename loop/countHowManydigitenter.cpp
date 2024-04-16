#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N (odd): ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "N should be an odd number." << endl;
        return 1; // Exit with errors
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == N / 2 || j == N / 2 || i == 0 || i == N - 1 || j == 0 || j == N - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

}
