#include<iostream>
using namespace std;

bool checkPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout<<"Enter the no to check: ";
    cin >> n;
    bool ans = checkPrime(n);
    if (ans == 1)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}
