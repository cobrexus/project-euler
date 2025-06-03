var n = 600_851_475_143;
var i = 2;
List<long> factors = [];


while (i * i <= n)
{
    if (n % i == 0)
    {
        n /= i;
        factors.Add(i);
    }
    else
    {
        ++i;
    }
}

if (n > 1)
{
    factors.Add(n);
}

Console.WriteLine(factors.Max());
