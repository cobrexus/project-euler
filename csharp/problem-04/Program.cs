static bool isPalindrome(int n)
{
    var m = n;
    var l = 0;

    while (m > 0)
    {
        l *= 10;
        l += m % 10;
        m /= 10;
    }

    return l == n;
}

var largest = 0;

for (var i = 100; i < 1000; ++i)
{
    for (var j = 100; j < 1000; ++j)
    {
        if (isPalindrome(i * j) && i * j > largest)
        {
            largest = i * j;
        }
    }
}

Console.WriteLine(largest);
