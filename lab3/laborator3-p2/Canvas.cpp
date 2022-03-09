#include "Canvas.h"
#include<cstdio>
#include<dos.h>

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
}

void Canvas::DrawRec(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i <= width; i++)
		for (int j = 0; j <= height; j++)
			if (i == top || i == bottom || j == left || j == right)
				mat[i][j] = ch;
}

void Canvas::FillRec(int left, int top, int right, int bottom, char ch)
{
}

void Canvas::SetPoint(int x, int y, char ch)
{
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{

}

void Canvas::Print()
{
}

void Canvas::Clear()
{
}
