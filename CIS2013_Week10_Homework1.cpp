#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


typedef char* IPtr;
IPtr b;

int main(){

int w, h, bombs, x, y, success;
char init (int, int);
bool alive = true;
void view();
srand(time(0));



//user enters height, width, and # of bombs
	bool too_many = true;
	cout << "Enter height: ";
	cin >> w;
	cout << "Enter width: ";
	cin >> h;
	while(too_many){
	cout << "Enter number of bombs: ";
	cin >> bombs;
	if (bombs>=w*h){cout << "Too many bombs - choose different amount: \n";}
	else {too_many=false;}}
	success = (h*w)-bombs;
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
			if (b[rand_one][rand_two]!='X'){
			b[rand_one][(rand_two)] = 'X';
			bombs--;
			}
		}
		
//print board
		cout << "   ";
		for (int i=0; i<h; i++){cout << i << " ";}
		cout << endl;
		cout << "   ";
		for (int i=0; i<h; i++){cout << "__";}
		cout << endl;
		for (int i=0; i<w; i++){
			cout << i << "|";
			for (int j=0; j<h; j++){cout << " " << ".";}
		cout << endl;
		}
		
//game play	
	while ((alive)&&(success!=0)){
	cout << endl << "Pick x and y coordinates: ";
	cin >> y >> x;
	if ((y>=h)||(x>=w)){cout << "invalid response - choose another: " << endl;}
	else if (b[x][y]=='X'){alive=false;
		b[x][y]='@';}
	else if (b[x][y]!='X'){
		b[x][y] = 'f';
		success--;
	}
//board re-printed
	cout << "   ";
		for (int i=0; i<h; i++){cout << i << " ";}
		cout << endl;
		cout << "   ";
		for (int i=0; i<h; i++){cout << "__";}
		cout << endl;
	for (int i=0; i<w; i++){
		cout << i << "| ";
		for (int j=0; j<h; j++){
			if (b[i][j]=='f'){cout << "  ";}
			else if ((b[i][j]=='@')&&(alive==false))
				cout << "@ ";
			else if ((b[i][j]=='X')&&((alive==false)||(success==0))){cout << "X ";}
			else{cout << ". ";}
		}
		cout << endl;
	}

	}
	//game end
	if (success==0){cout << "YOU WIN!";
	alive=false;}
	else{cout << "                             !!!!YOU DIED!!!!" << endl;}
	return 0;
}

