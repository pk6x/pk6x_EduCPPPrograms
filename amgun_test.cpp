#include <iostream>
#include <string>

int arrNum [5] = {2, 3, 5, 3, 5};

int main() // main function
{
	for(int name : arrNum)
	{
		printf("%d\n", name);
	}
/*	int a = 10;
	int *p_a;
	p_a = &a;
	*p_a = 5;

	printf("%d\n", *p_a);
	*/// printf("%p\n", &a);
	// printf("%p\n", &p_a);
	// printf("%p\n", p_a);

	// p_a = &a;

	// printf("%p\n", &p_a);
	// printf("%p\n", p_a);

	// *p_a = a;

	// printf("%p\n", &p_a);
	// printf("%p\n", p_a);

	// int x = 6;

	// int* p = &x;

	// *p = 10;

	// int** q = &p;

	// int*** r = &q;

	// printf("%d\n", *p);

	// printf("%d\n", *q);

	// printf("%d\n", *(*q));

	// printf("%d\n", *(*r));

	// printf("%d\n", *(**r));

	// *(**r) = 20;

	// printf("x: %d\n", x);

	// *(*q) = *p + 2;

	// printf("X: %d\n", x);
}