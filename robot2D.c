#include<stdio.h>

//TODO : Implement the function moveRobot2D here

int main()
{
	float x,y, vx, vy;
	printf("Enter initial position (x,y): ");
	scanf("%f %f", &x, &y);
	printf("Enter velocity (vx, vy): ");
	scanf("%f %f", &vx, &vy);
	for (int i = 0; i < 10; i++) {
		//Call moveRobot2D here and update x and y

		printf("Final position after %d seconds: (%.2f, %.2f)\n", i + 1, x, y);
	}
	return 0;
}