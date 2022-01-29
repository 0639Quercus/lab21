#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A, Rect *B){
	double ovlp_w = 0, ovlp_h = 0;
	ovlp_w = ((A->x + A->w < B->x + B->w)? A->x + A->w : B->x + B->w) - ((A->x > B->x)? A->x : B->x);
	if (ovlp_w < 0) ovlp_w = 0;
	ovlp_h = ((A->y < B->y)? A->y : B->y) - ((A->y - A->h > B->y - B->h)? A->y - A->h : B->y - B->h);
	if (ovlp_h < 0) ovlp_h = 0;

	return ovlp_w * ovlp_h;
}
