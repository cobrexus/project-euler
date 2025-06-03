var sum_of_sq = 0;

for (var i = 1; i <= 100; ++i)
{
    sum_of_sq += i * i;
}

var sq_of_sum = 0;

for (var i = 1; i <= 100; ++i)
{
    sq_of_sum += i;
}

sq_of_sum *= sq_of_sum;

Console.WriteLine(sq_of_sum - sum_of_sq);
