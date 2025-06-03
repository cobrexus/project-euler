var a = 1;
var b = 2;
var c = 0;
var temp = 0;

while (b < 4_000_000)
{
    if (b % 2 == 0)
    {
        c += b;
    }

    temp = a;
    a = b;
    b += temp;
}

Console.WriteLine(c);
