#include<stdio.h>

float moveRobot1D(float initialX, float vx)
{
	float time = 1.0; // Move for 1 second
	float finalX = initialX + vx * time;
	return finalX;
}

int main()
{
	float x, vx;
	printf("Enter initial position (x): ");
	scanf("%f", &x);
	printf("Enter velocity (vx): ");
	scanf("%f", &vx);
	for (int i = 0; i < 10; i++) {
		x = moveRobot1D(x, vx);
		printf("Final position after %d seconds: %.2f\n", i + 1, x);
	}
	return 0;
}