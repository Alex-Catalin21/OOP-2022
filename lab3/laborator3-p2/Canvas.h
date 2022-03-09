#pragma once

class Canvas {
	static const int width;
	static const int height;
	char mat[width][height];
public:
	Canvas(int width, int height);
	void DrawCircle(int x, int y, int ray, char ch);
	void FillCircle(int x, int y, int ray, char ch);
	void DrawRec(int left, int top, int right, int bottom, char ch);
	void FillRec(int left, int top, int right, int bottom, char ch);
	void SetPoint(int x, int y, char ch);
	void DrawLine(int x1, int y1, int x2, int y2, char ch);
	void Print();//shows what was printed
	void Clear();//clears the canvas
};