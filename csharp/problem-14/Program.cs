var max_len = 0;
var ans = 0;

for (var i = 1; i <= 1_000_000; ++i)
{
    long j = i;
    var chain_len = 1;

    while (j != 1)
    {
        if (j % 2 == 0)
        {
            j /= 2;
            chain_len += 1;
        }
        else
        {
            j = 3 * j + 1;
            chain_len += 1;
        }
    }

    if (chain_len > max_len)
    {
        max_len = chain_len;
        ans = i;
    }
}

Console.WriteLine(ans);
