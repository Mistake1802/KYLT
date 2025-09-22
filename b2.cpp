#include <iostream>
#include <cstdio>
using namespace std;

 main() {
	char ten[50] ;
	int chisotruoc , chisosau ;
	int soluong , thanhtien;
	
	cout << "nhap ten :";

	cin.getline(ten, 50);
	
	cout << "chi so truoc :";
	cin>>chisotruoc;
	
	cout<<"chi so sau :";
	cin>>chisosau;
	
	soluong =chisosau - chisotruoc;
	
	if (soluong <= 100) {
	
		thanhtien = soluong*1418;}
	else {
	
			if (soluong <= 150 and soluong > 100 ){
			
				thanhtien=100 * 1418 + (soluong - 100)*1622;}
			else {
			
					if (soluong <= 200 and soluong > 150){
					
						thanhtien = 100 * 1418 + 50 * 1622 + (soluong - 150)*2044;}
					else {
					
						if (soluong <= 300 and soluong > 200){
						
							thanhtien = 100* 1418 + 50 * 1622 + 50*2044 + (soluong - 200)*2210;}
						else {
						
								if (soluong <= 400 and soluong > 300){
								
									thanhtien = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + (soluong - 300)*2361;}
								else {
								
										thanhtien =100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + 100* 2361 + (soluong - 400)*2420;}
									}
								}
							}
						}

	cout << "tien dien :"<< thanhtien << endl;
	return 0;}

