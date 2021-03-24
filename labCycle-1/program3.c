//3.Program to find area of different geometrical shapes

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	//to find area of circle
	float r, area;
	printf("enter radius of circle: ");
	scanf("%f", &r);
	area = 3.142 * r * r;
	printf("\n area of circle: %f", area);

	//to find area of square
	float m, areaSquare;
	printf("\n\nenter length of side of square: ");
	scanf("%f", &m);
	areaSquare =  m * m;
	printf("\n area of square: %f", areaSquare);

	//to find area of rectangle
	float l,w,areaRectangle;
	printf("\n\nenter length and width of rectangle: ");
	scanf("%f%f", &l, &w);
	areaRectangle = l * w;
	printf("\narea of rectangle: %f", areaRectangle);

	//to find area of triangle given three sides
	float a,b,c,s, areaTriangle;
	printf("\n\nenter length of 3 sides of triangle: ");
	scanf("%f%f%f", &a,&b,&c);
	s = (a+b+c) / 2.0 ;
	areaTriangle = sqrt (s * (s - a) * (s - b) * (s - c) );
	printf("\narea of triangle: %f", areaTriangle); 
 
	//to find area of triangle given base and height
	float base,height, areaTri;
	printf("\n\nenter base and height: ");
	scanf("%f%f", &base,&height);
	areaTri = 0.5 * base * height;
	printf("\narea of triangle when base and height: %f",areaTri);
	printf("\n");
	return 0;
}
