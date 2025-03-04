#include <iostream>
#include <vector>
using namespace std;

bool pali(int n)
{
    int num1 = n;
    int num = 0;
    while (n > 0)
    {
        int rem = n % 10;
        num = num * 10 + rem;
        n /= 10;
    }

    if (num1 == num)
    {
        return true;
    }
    return false;
}
void rangeofpali(int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        if (pali(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start, end;
    cin >> start >> end;
    rangeofpali(start, end);
    return 0;
}