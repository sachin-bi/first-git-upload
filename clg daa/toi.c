#include <stdio.h>
void towerofhanoi(int, char, char, char);

int main()
{
    int n = 2;
    towerofhanoi(n, 'A', 'C', 'B');
    return 0;
}

void towerofhanoi(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\nMove disk 1 from peg %c  to peg %c", frompeg, topeg);
        return;
    }
    towerofhanoi(num - 1, frompeg, auxpeg, topeg);
    printf("\nMove disk %d from peg %c  to peg %c", num, frompeg, topeg);
    towerofhanoi(num - 1, auxpeg, topeg, frompeg);
}