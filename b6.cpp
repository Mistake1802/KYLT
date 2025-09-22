#include <iostream>

using namespace std;
main() {
	float tien , thang , ls;
	cout<< "tien gui:";
	cin>>tien;
	cout<<"thang gui :";
	cin>>thang;
	cout<<"lai suat : ";
	cin>> ls;
	for ( int i =0 ; i <thang ; i++){
		tien = tien + tien*ls/100;
	}
	cout<<"tien nhan:"<<tien<<endl;
	return 0;
}
