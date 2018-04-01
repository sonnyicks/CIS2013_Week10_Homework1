#include <iostream>
using namespace std;

typedef char* IPtr;
IPtr b;

int main(){

int w, h, bombs, x, y;
char init (int, int);
bool alive = true;


//user enters height, width, and # of bombs
	cout << "Enter width: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	cout << "Enter number of bombs: ";
	cin >> bombs;
	cout << endl;
	
//establish size of Array
	IPtr *b = new IPtr[w];
	for (int i=0; i<w; i++){
		b[i] = new char[h];
	}
	
//initialize array values
	for (int i=0; i<w; i++){
		for (int j=0; j<h; j++){
			b[i][j] = 'X';
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	while (alive){
	cout << "Pick x and y coordinates: ";
	cin >> x >> y;
	if (b[x][y]=='X'){alive=false;}
	for (int i=0; i<w; i++){
		for (int j=0; j<h; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	}
	cout << "YOU DIED" << endl;
	return 0;
}
