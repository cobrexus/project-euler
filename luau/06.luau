local sum_of_sq = 0

for i = 1, 100 do
    sum_of_sq += i * i
end

local sq_of_sum = 0

for i = 1, 100 do
    sq_of_sum += i
end

sq_of_sum *= sq_of_sum

print(sq_of_sum - sum_of_sq)
