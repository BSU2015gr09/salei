#include <iostream>
using namespace std;
long xorrnd(long x)
{
	long tmp = 0;
	tmp = x ^ (x << 13);
	tmp ^= tmp >> 15;
	x = tmp ^ (tmp << 5);
	return x;
}
int main()
{
    return 0;
}
