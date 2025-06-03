static bool isPrime(int n)
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

List<int> primes = [];
var i = 0;

while (primes.Count < 10_001)
{
    if (isPrime(i))
    {
        primes.Add(i);
    }

    i += 1;
}

Console.WriteLine(primes[^1]);
