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

local sum = 0

for i = 0, 1_999_999 do
    if is_prime(i) then
        sum += i
    end
end

print(sum)
