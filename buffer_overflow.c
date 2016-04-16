#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int value = 5;
	char buffer_one[8], buffer_two[8];
	
	strcopy(buffer_one, "one"); /* Put "one" into buffer_one. */
	strcopy(buffer_two, "two"); /* Put "two" into buffer_two. */
	
	printf("[BEFORE] buffer_two is at %p and contains \'%s\'\n", buffer_two, buffer_two);
	printf("[BEFORE] buffer_one is at %p and contains \'%s\'\n", buffer_one, bugger_one);
