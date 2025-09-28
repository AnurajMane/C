#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i <n; i++){
	    if(n % i == 0){
	   		return false;
	   	}
	
	}
	return true;

}


int main(){

	int num;
	bool ans;
	cout << "Enter a number : " << endl;
	cin >> num;
	
	if(num == 0){
	    cout << "Number is zero" << endl;
	}
	else if(num == 1){
	    cout << "Number is one" << endl;
	}
	else{
	     ans = isPrime(num);
	     cout << ans;
	}
	
	return 0;
}
