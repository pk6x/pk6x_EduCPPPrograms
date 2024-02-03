#include <iostream>
#include <string>

//function declarations
void increment(int* ptr);

int SumOfEelemnts(int* A, int size);

void print(char* c);

void Func(int* A[][2][2]); //passing multi-dimensional array as a function argument. In this instance, the passed array is a 3-dimensional one.

int* Add(int* a, int* b);

int Add2(int a, int b);

void printHello(const char* name);

void A();

void B(void (*ptr)()); //function pointer as an argument of another void function

int compare(int a, int b);

void BubbleSort(int *A, int n, int (*compare)(int, int));

int main() // main function
{

	/*////////////////first lesson:
	int a = 10;
	int *ptr_a;
	ptr_a = &a;
	*ptr_a = 5;

	printf("%d\n", *ptr_a);
	printf("%p\n", &a);
	printf("%p\n", &ptr_a);
	printf("%p\n", ptr_a);

	ptr_a = &a;

	printf("%p\n", &ptr_a);
	printf("%p\n", ptr_a);

	*ptr_a = a;

	printf("%p\n", &ptr_a);
	printf("%p\n", ptr_a);
	////////////////end of first lesson*/

	/*////////////////pointers to pointers:
	int x = 6;

	int* ptr = &x;

	*ptr = 10;

	int** q = &ptr;

	int*** r = &q;

	printf("%d\n", *ptr);

	printf("%d\n", *q);

	printf("%d\n", *(*q));

	printf("%d\n", *(*r));

	printf("%d\n", *(**r));

	*(**r) = 20;

	printf("x: %d\n", x);

	*(*q) = *ptr + 2;

	printf("X: %d\n", x);
	////////////////end of pointers to pointers*/


	/*////////////////pointers as function arguments
	// AKA calling by reference:
	int a;

	a = 10;
 
	increment(&a); // Calling by reference of variable "a" 

	printf("a: %d\n", a);
	////////////////end of pointers as function arguments*/

	/*////////////////pointers and arrays:
	int A[5] = {2, 3, 4, 6, 9};

	int* ptr_A = &A[0];

	// ptr_A = ptr_A + 1; 	//shifting the pointer cursor "4" bytes to the right of the array therefore the result will be the next item of the array.

	// 1 equals 4 bytes here as integers are 4 bytes worth of memory

	// printf("%d\n", *ptr_A);

	// printf("%d\n", *(A+1)); //arrays in c/c++ are pointers-like that points by default to the value of the first element's address.   

	for(int i = 0; i<5; ++i)
	{
		printf("Address: %p\t Value: %d\n", &A[i], A[i]);
		printf("Address from raw pointer: %p\t Value from raw pointer: %d\n", &ptr_A[i], ptr_A[i]);
	}
	////////////////end of pointers and arrays*/

	/*////////////////arrays as function arguments:
	int A[] = {1, 2, 3, 4, 5};

	int size = sizeof(A) / sizeof(A[0]);

	int total = SumOfEelemnts(A, size);

	printf("Sum of elements: %d\n", total);
	////////////////end of arrays as function arguments*/

	/*////////////////characters arrays and pointers:
	char charry[5]; //the size of the array must be known for the compiler and can't be omitted. must be defined right away. 
	charry[0] = 'B';
	charry[1] = 'L';
	charry[2] = 'A';
	charry[3] = 'K';
	charry[4] = '\0'; //strings in c language must null terminated by using "null" character such as ('\0');


	//OR

	char charry2[] = {'R', 'E', 'D', '\0'}; //in this method, the size of the array not necessairly need to be known prior to compilation and can be omitted. 
	//however, the null character must be included to terminate the string of characters.

	//OR

	char charry3[] = "WHITE"; //in this example, you can ommit the size of character array but must initialise it and in one continious line. 

	//declaring and initialise array of characters will be terminated by a null character implicitly;

	char* ptr_charry; //a pointer of char type.

	ptr_charry = charry; //the p_charry pointer is pointing to c character array


	printf("%s\n", charry);
	printf("%s\n", charry2);
	printf("%s\n", charry3);
	printf("%c\n", ptr_charry[1]);

	ptr_charry[1] = 'S';

	printf("%c\n", ptr_charry[1]);

	charry[1] = 'T';

	printf("%c\n", ptr_charry[1]);

	printf("%c\n", *(ptr_charry)); //derefrencing raw pointer to array of characters emits the first char element.

	print(charry);
	////////////////end of characters arrays and pointers*/

	/*////////////////pointers and multi-dimensional arrays:
	int B[2][3] = // two-dimensional int array 
	{
		{2, 4, 6},
		{4, 3, 1}
	};

	int (*ptr_B)[3] = B;

	printf("%c\n", B);
	printf("%c\n", *B);
	printf("%c\n", &B);
	printf("%c\n", B[0]);
	printf("%c\n", *B[0]);
	printf("%c\n", *(ptr_B[3]));

	int C[3][2][2] = //three-dimensional int array
	{
		{
			{2, 3},
			{4, 5}
		},
		{
			{4, 3},
			{2, 5}
		},
		{
			{4, 3},
			{6, 3}
		}
	};

	 printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]); //all are the same

	 printf("%d\n", *(C[0][0] + 1));

	for(int i = 0; i < 3; ++i)
	{
		// printf("%d", C[i]);
		for(int j = 0; j < 2; ++j)
		{
			// printf("%d", C[i][j]);
			for(int q = 0; q < 2; ++q)
			{
				printf("%d\t", C[i][j][q]);
			}
			printf("\n");
		}
		// printf("\n");
	}
	////////////////end of pointers and multi-dimensional arrays*/

	/*////////////////pointers and dynamic memory:
	int n;
	printf("Enter size of array\n");
	scanf("%d", &n);

	// int* A = (int*)malloc(n*sizeof(int)); //dynamically allocated array

	int* A = (int*)calloc(n, sizeof(int)); //using calloc

	for(int i = 0; i < n; ++i)
	{
		A[i] = i + 1;
	}

	for(int i = 0; i < n; ++i)
	{
		printf("%d ", A[i]);
	}

	free(A); //deallocating the dynamically allocated memory from before
	////////////////end of pointers and dynamic memory*/

	/*////////////////pointers as function returns:
	int x = 2, y = 4;

	// int c = Add(x, y); //call by value.

	int* ptr = Add(&x, &y); //call by reference

	printf("Sum= %d\n", *ptr);
	////////////////end of pointers as function returns*/

/*	////////////////function pointers:
	int (*ptr_func)(int, int); //function pointer decleratoin that takes 2 arguments of the same type of the function pointing at as well as the return type must be matched. 

	//IMPORTANT: int (*ptr_func) is not the same as int *ptr_func. The latter will mean is a return type of int pointer, whereas (*ptr_func) is surronded by parenthesis indicating a pointer to a function but with a return type of int. 

	ptr_func = Add2; //function pointer 

	int c;

	c = ptr_func(2, 3); //de-refrencing the function address therefore accessing its vale or body and then  executing the function

	printf("%d\n", c);

	void (*ptr_funcPrint)(const char*);

	ptr_funcPrint = printHello;

	ptr_funcPrint("Tom");
	////////////////end of function pointers*/

	/*////////////////function pointers and callbacks:
	void (*p)() = A;
	B(p);

	B(A); //This will work because function names return pointers
	// A is a callback function here.

	int A[] = {-33, 1, 5, 2, 10, 4};

	BubbleSort(A, 6, compare);

	for(int i = 0; i < 6; ++i) { printf("%d\n", A[i]);}
	////////////////end of function pointers and callbacks*/

	////////////////what is memory leak?
	////////////////end of what is memory leak?

	std::cin.get();
}

//functions definations:
void increment(int* ptr)
{
	*ptr = (*ptr) + 1;
}

int SumOfEelemnts(int* A, int size)
{
	int sum = 0;

	for(int i = 0; i < size; ++i)
	{
		sum += A[i]; // A[i] is same as *(A+i)
	}

	return sum;
}

void print(char* c)
{
	printf("beginning of while loop\n");
	while(*c != '\0')
	{
		printf("%c", *c);
		++c;
	}
	printf("\n");
	printf("end of while loop\n");
}

int* Add(int* a, int* b)
{
	int* c = (int*)malloc(sizeof(int));

	*c = (*a) + (*b);

	return c;
}

int Add2(int a, int b)
{
	return a + b;
}

void printHello(const char* name)
{
	printf("Hello %s\n", name);
}

void A()
{
	printf("Hello\n");
}

void B(void (*ptr)())
{
	ptr(); //call-back functio that ptr points to
}

int compare(int a, int b)
{
	if(a > b) { return 1; }

	else { return -1; }
}

void BubbleSort(int* A, int n, int (*compare)(int, int))
{
	int temp;

	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n-1; ++j)
		{
			if(compare(A[j], A[j+1]) > 0) //compare A[j] with A[j+1] and swap the values if needed
			{
				temp = A[j];

				A[j] = A[j+1];

				A[j+1] = temp;
			}
		}
	}
}