/*
 * =====================================================================================
 *
 *       Filename:  ex6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/06/2016 12:59:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345F;
	double super_power = 56689.4532;
	char initial = 'A';
	char first_name[] = "Hasan";
	char last_name[] = "Pay";

	printf("You are%d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super power.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n",
		first_name, initial, last_name);

	return 0;
}
