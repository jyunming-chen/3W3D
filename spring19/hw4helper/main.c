#include "GraphicsGems.h"
#include <stdio.h>
extern boolean Check_Intersect(Box2 *R, Point2 *C, double Rad);

int main() {
	Box2 r;
	r.min.x = -4, r.min.y = -4;
	r.max.x = 4, r.max.y = 4;
	
	Point2 c;
	c.x = 3, c.y = 5;
	
	double Rad = 2.3;
	
	printf ("%d\n", Check_Intersect(&r, &c, Rad));
	return 0;
}