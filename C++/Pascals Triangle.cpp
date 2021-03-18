#include <vector>

long long binCoef(int n, int k)
{
    long long res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);          //res = ((n - i)/(i+1)) -> n/1 * (n-1)/2 * ... * (n-k+1)/k! i.e nCk. C(n,k) = C(n,n-k).
    }
    return res;
}

std::vector<long long> pascalsTriangle(int n)
{
  std::vector<long long> result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            result.push_back(binCoef(i, j));
        }
    }
  return result;
}
