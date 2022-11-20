#pragma once
class cartas
{
private:
	int num = 0;
	char color = 'R';
	char simb = 'A';

public:
	int getnumero();
	void setnumero(int num);

	char getcolor();
	void setcolor(char color);

	char getsimbolo();
	void setsimbolo(char simb);
};

