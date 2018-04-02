#include <iostream>
#include <cstdlib>
using namespace std;


typedef char* IPtr;
IPtr b;

int main(){

int w, h, bombs, x, y, success;
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
	success = bombs;
	cout << endl;
	
//establish size of Array
	IPtr *b = new IPtr[w];
	for (int i=0; i<w; i++){
		b[i] = new char[h];
	}
	
//initialize array values
	for (int i=0; i<w; i++){
		for (int j=0; j<h; j++){
			b[i][j] = '.';
		}
	}
	
//bombs placed
		while (bombs>0){
			int rand_one = (rand() % w);
			int rand_two = (rand() % h);
			if (b[rand_one][rand_two]!='@'){
			b[rand_one][(rand_two)] = '@';
			bombs--;
			}
		}
		
//print board
		cout << "   ";
		for (int i=0; i<h; i++){cout << i << " ";}
		cout << endl;
		for (int i=0; i<w; i++){
			cout << i << " ";
			for (int j=0; j<h; j++){
		cout << " " << ".";
			}
		cout << endl;
		}
		
//game play	
	while (alive){
	cout << "Pick x and y coordinates: ";
	cin >> x >> y;
	if (b[x][y]=='@'){alive=false;}
	else if (b[x][y]!='@'){
		b[x][y] = 'x';
	}
//board re-printed
	cout << "   ";
	for (int i=0; i<h; i++){cout << i << " ";}
		cout << endl;
	for (int i=0; i<w; i++){
		cout << i << "  ";
		for (int j=0; j<h; j++){
			if (b[i][j]=='x'){cout << "x ";}
			else if ((b[i][j]=='@')&&(alive==false))
				cout << "@ ";
			else{cout << ". ";}
		}
		cout << endl;
	}
	}
	cout << "!!!!YOU DIED!!!!" << endl;
	return 0;
}

