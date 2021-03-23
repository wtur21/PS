#include <iostream>
#include <cstdio>

using namespace std;

int suma(unsigned int n_1, unsigned int n_2, unsigned int n_3 = 0, unsigned int n_4 = 0, unsigned int n_5 = 0)
{
int sum2, sum3, sum4, sum5;
sum2 = n_1 + n_2;
sum3 = sum2 + n_3;
sum4 = sum3 + n_4;
sum5 = sum4 + n_5;
return sum5;
}

int main(void)
{
int a = suma(1,10,12);
printf("%d", a);
return 0;
}
