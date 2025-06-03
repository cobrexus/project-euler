local n = 600_851_475_143
local i = 2
local factors = {}

while i * i <= n do
    if n % i == 0 then
        n /= i
        table.insert(factors, i)
    else
        i += 1
    end
end

if n > 1 then
    table.insert(factors, n)
end

print(math.max(factors[1], factors[#factors]))
