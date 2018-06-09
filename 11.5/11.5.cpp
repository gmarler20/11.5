﻿// 11.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//PT -- need a second parameter so that you know how big the array is
//      that way, you can use this function for any integere array, and not
//      just those arrays with 8 elements.
//  -2
// int SmallestElement(int* test, int size) {
int SmallestElement(int test[]) {
	int smallest;
	int *ptr = &smallest;
	*ptr = test[0];
	for (int i = 1; i < 8; i++) {
		if (test[i] < *ptr)
		{
			*ptr = test[i];
		}
		//PT -- don't need else if there's nothing to do in that case
		else;
	}
	return *ptr;
}

//PT -- here's another approach, using pointers in a more useful way:
/*
int SmallestElement(int *test, int size) {
	int smallest = test[0];
	for (int i = 1; i < size; i++) {
		if (test[i] < smallest)
		{
			smallest = test[i];
		}
	}
	return smallest;
}
*/

int main()
{
	int testarray[8] = { 1,2,4,5,10,100,2,-22 };
	cout << SmallestElement(testarray);
    return 0;
}

