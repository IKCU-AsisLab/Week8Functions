#include<stdio.h>

void print1toN(int n);
// add other function declarations here

int main()
{
	//Call this function to print numbers 1 to N
	print1toN(9);
	// Call printNto1 here

	// Call sum1toN here

	// Call multiply1toN here

	// Call sumOfDigits here

	return 0;

}

void print1toN(int n)
{
	if (n > 1)
	{
		print1toN(n - 1);
	}
	printf("%d ",n);
}