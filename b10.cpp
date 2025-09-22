#include <iostream>

using namespace std;
main() {
	float tien , thang , ls;
	cout<< "tien can co:";
	cin>>tien;
	cout<<"thang gui :";
	cin>>thang;
	cout<<"lai suat : ";
	cin>> ls;
	for ( int i =0 ; i <thang ; i++){
		tien = tien - tien*ls/100;
	}
	cout<<"tien gui:"<<tien<<endl;
	return 0;
}
