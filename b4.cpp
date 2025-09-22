#include <iostream>
#include <cstdio>
using namespace std;
main() {
int t,v,th,tb;
char ten[50];
cout<<"nhap ho ten:";
cin.getline(ten, 50);
cout<<"diem toan:";
cin>>t;
cout<<"diem van:";
cin>>v;
cout<<"diem tin hoc:";
cin>>th;
cout<<"hoc sinh: "<<ten<<"|| Hoc luc:";
tb=(t+v+th)/3;
if (tb<5){
	cout<<"Yeu";
}
else {
	if(5<=tb and tb<7){
		cout<<"trung binh";
	}
	else{
		if (tb>=7 and tb <8){
			cout<<"kha";
			
		}
		else{
			cout<<"Gioi";
		}
	}
}
}
