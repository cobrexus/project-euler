var result = 0;

for (var i = 1; i < 998; ++i)
{
    for (var j = 1; j < 998; ++j)
    {
        for (var k = 1; k < 998; ++k)
        {
            if (i + j + k == 1000 && (i * i) + (j * j) == k * k)
            {
                result = i * j * k;
                goto end;
            }
        }
    }
}

end: Console.WriteLine(result);
