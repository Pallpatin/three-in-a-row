#include "params.h"
#define random(min,max) (min+rand()%(max-min+1))

//  Element metod

void Elem::startinit()
{
	color = ColorAvalible[random(0, 4)];
	int val = random(0, FormsMax-1);
	form = FormsAvalible[val];
	showed = ShowedForm[val];
	
}
void Elem::showElement()
{
	cout << endl << color << "\t" << form;
	cout << endl;
}


//  Map metod

void Map::GetXY(int x, int y)
{
	X = x;
	Y = y;
}

void Map::startinit()
{
	pole = new Elem * [Y];

	for (int i = 0; i < Y; i++) {
		pole[i] = new Elem[X];
	}
	
}

void Map::fullPole()
{
	Elem that;
	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < X; j++) {
			that.startinit();
			pole[i][j] = that;
		}
	}
	Xmax = X;
	Ymax = Y;
	X = 2;
	Y = 5;
}

void Map::showpole()
{
	cout << endl << "\t" << name << endl << '\t' << "\n\twasd - for move celected element\n\t7 8 9 4 6 1 2 3 -to swap elements";
	cout << "\n\t" << char(201) ;
	for(int i=0;i<Xmax;i++)cout << char(205) << char(205);
	cout << char(187);
	char cel = ' ';
	for (int i = 0; i < Ymax; i++) {
		cout << endl;
		cout << "\t" << char(186);
		for (int j = 0; j < Xmax; j++) {
			if (i == Y && j == X)cel = SelectedChar;
			else cel = ' ';
			cout <<cel << pole[i][j].showed;
		}
		cout << char(186);
	}
	cout <<endl << "\t" << char(200);
	for (int i = 0; i < Xmax; i++)cout << char(205) << char(205);
	cout << char(188);
}

void Map::action(char act)
{
	switch (act) {
	case 'd':
		if (X < Xmax-1) {
			X++;
		}
		break;
	case 'a':
		if (X > 0) {
			X--;
		}
		break;
	
	case 'w':
		if (Y > 0) {
			Y--;
		}
		break;

	case 's':
		if (Y < Ymax-1) {
			Y++;
		}
		break;

	case '3':
		if (Y < Ymax - 1 && X < Xmax - 1) {
			swap(pole[Y][X], pole[Y + 1][X + 1]);
			X++;
			Y++;
		}
		break;
	case '2':
		if (Y < Ymax - 1) {
			swap(pole[Y][X], pole[Y + 1][X]);
			Y++;
		}
		break;
	case '6':
		if (X < Xmax - 1) {
			swap(pole[Y][X], pole[Y][X + 1]);
			X++;
		}
		break;
	case '7':
		if (Y > 0 && X > 0) {
			swap(pole[Y][X], pole[Y - 1][X - 1]);
			X--;
			Y--;
		}
		break;
	case '8':
		if (Y > 0) {
			swap(pole[Y][X], pole[Y - 1][X]);
			Y--;
		}
		break;
	case '4':
		if (X > 0) {
			swap(pole[Y][X], pole[Y][X - 1]);
			X--;
		}
		break;

	case '1':
		if (X > 0&& Y < Ymax - 1) {
			swap(pole[Y][X], pole[Y + 1][X - 1]);
			X--;
			Y++;
		}
		break;
	case '9':
		if (X < Xmax && Y > 0) {
			swap(pole[Y][X], pole[Y - 1][X + 1]);
			X++;
			Y--;
		}
		break;
	}
}
 
bool Map::clear()
{
	int coordinat = 0;
	int num = 0;
	char* arr = new char[WIDGH];
	for (int k = 0; k < WIDGH; k++)arr[k] = 0;
	for (int i = 0; i < Ymax; i++) {
		for (int j = 0; j < Xmax-2; j++) {
			if (arr[0] == 0)arr[0] = pole[i][j].showed;
			else if(arr[0]== pole[i][j].showed)
		}
	}
}

