#include <stdio.h>


struct Student{
	
	char firstName[50];
	char lastName[50];
	int age;

};  //<----------------- IL Y A UN POINT FIRGULE ICI


int main{
	
	struct Student toto; //déclaration d'une variable.
	toto.age=19;
	return 0;

}