#include <iostream>
using namespace std;
int main (){
	int nilai;
	cout << "ketiklah nilai anda =";
	cin >> nilai;
	cout << "hasil =";
	if (nilai > 91){
		cout << "A" << endl;
	}
	else if (nilai > 85){
		cout << "AB" << endl;
	}
	else if (nilai > 79){
		cout << "B" << endl;
	}
	else if (nilai >69) {
		cout << "C" << endl;
	}
	else {
		cout << "D" << endl;
	}
	return 0;	
}