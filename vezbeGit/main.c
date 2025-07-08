#include <stdio.h>

void ispisi(){
	printf("Rezultat je: %d \n", c);
}

int Razlika(int x, int y) {
    if (x > y)
        return x - y;
    else
        return y - x;
}

int main() {
    int a = 3;
    int b = 8;
    int c;

    c = Razlika(a, b);
    
    ispisi();
    
    return 0;
}