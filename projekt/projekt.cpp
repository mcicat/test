// projekt.cpp : Defines the entry point for the application.
//

#include "projekt.h"
#include "mathlib.h"

using namespace std;

int main()
{
	char name[256];
	printf("Please insert your full name (first name and last name): \n");
	scanf("%s", name);

	printf("Hello, %s", name);

	int x = 5; 
	int y = 10; 

	printf("%d + %d = %d", x, y, add_numbers(x, y));
	
	return 0;
}
