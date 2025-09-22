#include <iostream>

using namespace std;
main() {
	float tien , tiennhan , ls, thang;
	cout<< "tien gui:";
	cin>>tien;
	cout<<"tiennhan :";
	cin>>tiennhan;
	cout<<"lai suat : ";
	cin>> ls;
	while (tiennhan > tien ){
		tien = tien + tien*ls/100;
		thang=thang +1;
	}
	
	cout<<"so thang:"<<thang<<endl;
	return 0;
}
