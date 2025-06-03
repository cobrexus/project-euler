static int triangleNum(int nth)
{
    return nth * (nth + 1) / 2;
}

static int divisors(int n)
{
    var ret = 2;

    for (var i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            ++ret;
        }
    }

    return ret;
}

for (var i = 1; ; ++i)
{
    if (divisors(triangleNum(i)) > 500)
    {
        Console.WriteLine(triangleNum(i));
        goto end;
    }
}

end:
return 0;
