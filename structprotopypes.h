#pragma once

struct Elem {
	string color;
	string form;
	char showed;
	/*bool celected=0;*/

	void startinit();
	void showElement();
};

struct Map {

	int CountOfAvalibleActions;
	int X;
	int Xmax;
	int Y;
	int Ymax;

	string name;
	Elem** pole;
	

	void GetXY(int x,int y);

	void startinit();
	void fullPole();
	void showpole();
	void action(char);
	bool clear();



};

