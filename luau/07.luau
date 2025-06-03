local function is_prime(n: number): bool
    if n < 2 then
        return false
    end

    local i = 2

    while i * i <= n do
        if n % i == 0 then
            return false
        else
            i += 1
        end
    end

    return true
end

local primes = {}
local i = 0

while #primes < 10_001 do
    if is_prime(i) then
        table.insert(primes, i)
    end

    i += 1
end

print(primes[#primes])
