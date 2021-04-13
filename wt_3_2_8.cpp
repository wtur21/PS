#include <iostream>

using namespace std;

void zamien(int & a, int * b)
{
int temp;
temp = a;
a = *b;
*b = temp;
}

int main(void)
{
int num1 = 10, num2 = 23;
int *wsk;
int &rf = num2;
wsk = &num1;
zamien(rf, wsk);
printf("%d, %d", num1, num2);
}
