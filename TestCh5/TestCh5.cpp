// TestCh5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

double distance(double, double, double, double);
void midpoint(double, double, double, double, double&, double&);
void slope(double, double, double, double, bool&, double&);

int _tmain(int argc, _TCHAR* argv[])
{
	double x1, x2;
	double y1, y2;
	double xmid, ymid;
	double s;
	bool vertical = false;

	cout << "Please enter coords (x,y) of first point: ";
	cin >> x1 >> y1;
	cout << "Please enter coords (x,y) of second point: ";
	cin >> x2 >> y2;

	cout << "Distance is : " << distance(x1,x2,y1,y2)<< endl;

	midpoint(x1, x2, y1, y2, xmid, ymid);
	cout << "Midpoint is: ( " << xmid << ", " << ymid << " )" << endl;

	slope(x1, x2, y1, y2, vertical, s);
	if (vertical == true)
	{cout << "No slope, vertical set to " << vertical << endl;}
	else if (vertical == false)
	{
		cout << "Slope is: " << s << endl;
	}

	system("pause");
	return 0;
}

double distance(double x1, double x2, double y1, double y2)
{
	return sqrt(pow((x2-x1), 2) + pow((y2-y1),2));
}
void midpoint(double x1, double x2, double y1, double y2, double& xmid, double& ymid)
{
	xmid = (x2 + x1) / 2;
	ymid = (y2 + y1) / 2;
}
void slope(double x1, double x2, double y1, double y2, bool& vertical, double& s)
{
	if (x1 != x2)
	{
		s = (y2 - y1)/(x2-x1);
		vertical = false;
	}
	else if (x1 == x2)
	{
		vertical = true;
	}
}