#ifndef ABMAU_POS_H
#define ABMAU_POS_H

struct Pos
{	
	int x;
	int y;
	
	Pos() :
		x(0),
		y(0)
	{};	
	
	Pos(int x, int y) :
		x(x),
		y(y)
	{};	
};


#endif //ABMAU_POS_H
