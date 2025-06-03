local sum = 0

for i = 0, 999 do
    if i % 3 == 0 or i % 5 == 0 then
        sum += i
    end
end

print(sum)
