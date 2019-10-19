#include <stdio.h>


int main()
{
	int x = 76;
	int y = 6;


//declare integers num1 and num2 and assign values
	int num1=5;
	int num2=3;

// declare integers and assign values
	int sum=0;
	int difference=0;
	int product=0;
	int quotient=0;

	//the sum of the two numbers
	sum = num1 + num2;
	//the difference of the two numbers
	difference = num1 - num2;
	//the product of the two numbers
	product = num1 * num2;
	//the quotient of the two numbers
	quotient = num1 / num2;

	printf("Hello World!\n");
	printf("%d + %d = %d\n",num1, num2, sum);
	printf("%d - %d = %d\n",num1, num2, difference);
	printf("%d * %d = %d\n",num1, num2, product);
	printf("%d / %d = %d\n",num1, num2, quotient);
	return 0;

}

