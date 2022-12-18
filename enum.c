// Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants,
// the names make a program easy to read and maintain.

// enum State {Working = 1, Failed = 0}; 


#include<stdio.h>

enum weekdays{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
	enum weekdays day;
	day = Wed;
	printf("%d",day);
	return 0;
}
