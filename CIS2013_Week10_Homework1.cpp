#include <iostream>
using namespace std;

int main(){

int w, h, bombs;
void init (int, int);

//user enters height, width, and # of bombs
	cout << "Enter width: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	cout << "Enter number of bombs: ";
	cin >> bombs;
	cout << endl;
	init (w, h);
	return 0;
}
//establish board using two dimensional array
//---add bombs---
void init (int width, int height){
	typedef char* IPtr;
	IPtr *x = new IPtr[width];
	for (int i=0; i<width; i++){
		x[i] = new char[height];
	} 
}
