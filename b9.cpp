#include <iostream>
using namespace std;
main() {
	int n,gt,i;
	cout<<"n:";
	cin>>n;
	gt=1;
	i=n;
	while (i>1){
		gt=gt*i;
		i=i-2;
		
	}
	cout<<gt<<endl;
	return 0;
}
