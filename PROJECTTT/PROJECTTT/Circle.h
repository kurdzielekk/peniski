#pragma once
class circle
{
	int r;
public:
	circle();
	circle(int r);
	~circle();

	void drawCircle(int r) { r = r; }
};