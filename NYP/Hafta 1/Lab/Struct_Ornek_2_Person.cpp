#include <iostream>
#include <string.h>

using namespace std;

typedef struct Person {
  char name[50];
  int per_No;
  float salary;
} Person;



int main()
{
	Person person1;
	strcpy(person1.name, "Ali Veli");
	
	person1.per_No = 1005;
  	person1. salary = 8750;
  	
  	
	cout<<"Personelin ismi: "<< person1.name <<endl;
	cout<<"Personelin Numarasi: "<< person1.per_No <<endl;
	cout<<"Personelin Maasi: "<< person1.salary;
	
	return 0;
}
