#pragma once
class display
{
	int a1;
	int a2;
	int b1;
	int b2;
	int r;
public:
	display();
	display(int a1, int a2, int b1, int b2, int r);
	~display();
	void drawTriangle(int a1, int a2, int b1, int b2) { a1 = a1, a2 = a2, b1 = b1, b2 = b2; }

	void drawCircle(int r) { r = r; }

	void drawParallelogram(int a1, int a2, int b1, int b2) { a1 = a1, a2 = a2, b1 = b1, b2 = b2; }

};

