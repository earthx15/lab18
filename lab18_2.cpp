#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *x1,Rect *x2){
	double height=0,l=0;
	l=min(x1->x+x1->w,x2->x+x2->w)-max(x1->x,x2->x);
	height=min(x2->y,x1->y)-max(x1->y-x1->h,x2->y-x2->h);
	if (l*height<0)
	{
		return 0;
	}else return l*height;
	
}
