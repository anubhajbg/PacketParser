#include <stdio.h>
#include "PacketParser.h"

//Function name: myfunction prints the values in the loop
int myfunction(int i)
{
	for (; i < 10; i++)
	{
		printf("\ni=%d", i);
	}
	return i;
}
void main()
{
	printf("\nHello world");
	printf("\nmyfunction returned = %d", myfunction(0));
	printf("\n");
}