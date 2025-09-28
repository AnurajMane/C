#include<iostream>
using namespace std;


int main(){

	int ip, sz;
	do{
	    cout<< "1.char\n2.int\n3.short int\n4.long int\n5.float\n6.Double\n7.wchar_t\n";
		cout << "Enter your choice : ";
		
		cin >> ip;
	
	
	    switch(ip){
		case 1:
			sz = sizeof(char);
			cout << "Size of char : " << sz << endl;
			break;
		case 2:
			sz = sizeof(int);
			cout << "Size of int : " <<sz << endl;
			break;
		case 3:
			sz = sizeof(short int);
			cout <<"Size of short int : " << sz << endl;
			break;
		case 4:
			sz = sizeof(long int);
			cout << "Size of long int : " <<sz << endl;
			break;
		case 5:
			sz = sizeof(float);
			cout <<"Size of float : " << sz << endl;
			break;
		case 6:
			sz = sizeof(double);
			cout << "Size of Double : " << sz << endl;
			break;
		case 7:
			sz = sizeof(wchar_t);
			cout << "Size of wchar_t : " <<sz << endl;
			break;
			
			
		default:
			cout<<"wrong input";
	
	 	}
	}while(ip < 8);
	return 0;
}