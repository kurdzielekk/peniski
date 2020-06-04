#include "display.h"

display::display()
{
	a1 = 0;
	a2 = 0;
	b1 = 0;
	b2 = 0;
	r = 0;
}

display::display(int a1, int a2, int b1, int b2, int r)
{
	a1 = a1;
	a2 = a2;
	b1 = b1;
	b2 = b2;
	r = r;
}

display::~display()
{
}

void display::drawTriangle(int a1, int a2, int b1, int b2)
{
}

void display::drawCircle(int r)
{
}

void display::drawParallelogram(int a1, int a2, int b1, int b2)
{
}