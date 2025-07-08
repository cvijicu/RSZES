#include <stdio.h>

void ipisi(){
	printf("Rezultat je: %d \n", c);
}

int main() {
    int a = 3;
	int b = 8;
	int c;
 
	if (a > b)
		c = a - b;
	else 
		c = b - a;

    ispisi();

	return 0;
}