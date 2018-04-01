#include <iostream>
using namespace std;

typedef char* IPtr;
IPtr b;

int main(){

int w, h, bombs, x, y;
char init (int, int);
bool alive = true;
void view();


//user enters height, width, and # of bombs
	cout << "Enter width: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	cout << "Enter number of bombs: ";
	cin >> bombs;
	cout << endl;
	b << init (w, h);
	cout << "1";
}

char init (int width, int height){
	IPtr *b = new IPtr[width];
	for (int i=0; i<width; i++){
		b[i] = new char[height];
	}
	for (int i=0; i<width; i++){
		for (int j=0; j<height; j++){
			b[i][j] = 'x';
		}
	}
	return b;
}