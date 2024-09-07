#include <stdio.h>

long long int swap(long long int, int);

int main()
{
    short a;
    int b;
    long long int c;
    scanf("0x%hx 0x%x 0x%llx", &a, &b, &c);
    printf("0x%hx 0x%x 0x%llx", (short)swap(a, 2), (int)swap(b, 4), swap(c, 8));
    return 0;
}

long long int swap(long long int n, int cnt)
{
    long long int ret = 0;
    for(int i = 0; i < cnt; i++)
    {
        ret <<= 8;
        ret |= (n & 0xff);
        n >>= 8;
    }
    return ret;
}
