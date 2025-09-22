#include <iostream>

using namespace std;

 main() {
    char ten;
    char maCL;
    int trongluong,gia,soluong;
    cout << "Nhap ten mat hang: ";
    cin>>ten;
     cin.ignore();
    cout << "Nhap trong luong (kg): ";
    cin >> trongluong;
    cout << "Nhap don gia (VND): ";
    cin >> gia;
    cout << "Nhap ma chat luong : ";
    cin >> maCL;
     cin.ignore();
    cout << "Nhap so luong : ";
    cin >> soluong;
  
    cout << "Ten mat hang   : " << ten << endl;
    cout << "Trong luong    : " << trongluong << " kg" << endl;
    cout << "Don gia        : " << gia << " VND" << endl;
    cout << "Ma chat luong  : " << maCL << endl;
    cout << "So luong       : " << soluong << endl;

    return 0;
}

