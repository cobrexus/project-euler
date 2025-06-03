static bool isPrime(long n)
{
    if (n < 2)
    {
        return false;
    }

    var i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            i += 1;
        }
    }

    return true;
}

long sum = 0;

for (long i = 0; i < 2_000_000; ++i)
{
    if (isPrime(i))
    {
        sum += i;
    }
}

Console.WriteLine(sum);
