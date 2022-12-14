#include <malloc.h>
#include "circle.h"


void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
//Loop over fives circles i=1->5 and set their coordinate and radius accordingly.
	for(int i = 1; i <= 5; i++){
		c[i].p.x = i;
		c[i].p.y = i;
		c[i].r = i;
	}
}

int circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/
//The circle is valid if it's radius is above 0.
	if(c->r > 0){
		return 1;
	}
	else{
		return 0;
	}
}

void translate(circle* c, const point* p) {
/*ansver to exercise 6.d*/
	c->p.x = p->x;
	c->p.y = p->y;
}



