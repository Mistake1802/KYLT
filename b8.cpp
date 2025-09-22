#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;         
    if (n == 2) return true;          
    if (n % 2 == 0) return false;     


    int can = sqrt(n);
    for (int i = 3; i <= can; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " la so nguyen to." << endl;
    } else {
        cout << n << " khong phai so nguyen to." << endl;
    }

    return 0;
}

