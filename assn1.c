/*
Eric Shields
CS 3060-601  Spring 2015
Assignment 1
Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

#include<stdio.h>

int main(int argc , char *argv[])
{
	int size = argc;
	int i;

	printf("Program 1 for CS 3060 by Eric Shields\n");

	for(i = 0; i < size; i++)
	{
		printf("Argument #");
		printf("%d",i);
		printf(": ");
		printf("%s", argv[i]);
		printf("\n");
	}
	printf("Number of arguments printed:");
	printf("%d\n", size);

	return 0;
}

