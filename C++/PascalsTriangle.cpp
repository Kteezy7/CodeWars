#include <vector>

long long fact(long long a)
{
    long long init = 1;
    for (int i = 2; i <= a; i++)
    {
        init *= i;
    }
    return init;
}

long long comb(long long a, long long b)
{
    return fact(a) / (fact(b) * fact(a - b));
}

std::vector<long long> pascalsTriangle(int n)
{
  std::vector<long long> result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            result.push_back(comb(i, j));
        }
    }
  return result;
}
