// projekt.cpp : Defines the entry point for the application.
//

#include "projekt.h"

using namespace std;

int main()
{
	char name[256];
	printf("Please insert your name: \n");
	scanf("%s", name);

	printf("Hello, %s", name);
	
	return 0;
}
