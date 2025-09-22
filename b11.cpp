#include <iostream>
using namespace std;

void tinhtien(int giatri, int duavao, int &gia10, int &gia5, int &gia1, int &dua1) {
    dua1 = duavao - giatri;
    int dua = dua1;

    gia10 = dua / 10;  
    dua %= 10;        

    gia5 = dua / 5;   
    dua %= 5;

    gia1 = dua;        
}

int main() {
    int t;
    cout << "So bai test: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int giatri, duavao;
        cin >> giatri >> duavao;

        int gia10, gia5, gia1, dua1;
        tinhtien(giatri, duavao, gia10, gia5, gia1, dua1);

        cout << dua1 << " = " << gia10 << " * 10 + " << gia5 << " * 5 + " << gia1 << " * 1\n";
    }

    return 0;
}

