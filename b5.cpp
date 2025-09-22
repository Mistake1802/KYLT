#include <iostream>
#include <cstdio>
using namespace std;
main() {
float diem,diem4;
char ten[50];
string diemchu;
cout<<"nhap ho ten:";
cin.getline(ten, 50);
cout<<"diem:";
cin>>diem;
if (diem >= 9){
	diem4=4;
	diemchu ="A+";
}
else if (diem <9 and diem >= 8){
	diem4 = 3.5;
	diemchu="A";
}
else if (diem <8 and diem >= 7){
	diem4= 3;
	diemchu="B+";
}
else if (diem < 7 and diem >= 6){
	diem4 = 2.5;
	diemchu = "B";
}
else if (diem < 6 and diem >= 5){
	diem4 = 2;
	diemchu = "C";
}
else if (diem <5 and diem >=4 ){
	diem4 = 1.5;
	diemchu ="D";
}
else {
diem4 = 1;
diemchu = "F";
 
}
cout<<ten<<"|| thang diem 10 :"<<diem<<"|| thang diem 4:"<<diem4<<"|| thang diem chu:"<< diemchu<<endl;
return 0;
}
