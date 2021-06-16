#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter the numbers"<<endl;
	cin>>a;
	cin>>b;

	int c=a+b;
	cout << c << endl;
 char d='a';//1 byte in c++

 cout<<d<<endl;
 float f=1.23; // 4 byte
 double g=1.2345; // 8 byte
 bool h=true;
 
 int size=sizeof(f);
 cout<<size<<endl;


}

