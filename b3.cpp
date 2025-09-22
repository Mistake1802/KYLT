#include <iostream>

using namespace std;
main() {
	int thang , nam ;
	cout<<"nhap Thang:";
	cin>>thang;
	while ( thang > 12){
		cout<<"nhap lai Thang:";
		cin>>thang;
	}
	cout<<"nhap Nam:";
	cin>>nam;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		cout<<"Thang "<<thang<<" co so ngay :"<< 31 << endl;
	}
	else {
		if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
			cout<<"Thang "<<thang<<" co so ngay :"<< 30 << endl;
		}
		else {
			if (nam % 4 ==0 and nam & 100 != 0){
					cout<<"Thang 2 co so ngay :"<< 29 << endl;
					
				
			}
			else {
					cout<<"Thang 2 co so ngay :"<< 28 << endl;
			}
		}
	}
	return 0;
}
