local function is_palindrome(n: number): bool
    local m = n
    local l = 0

    while m > 0 do
        l *= 10
        l += m % 10
        m //= 10
    end

    return l == n
end

local largest = 0

for i = 100, 999 do
    for j = 100, 999 do
        if is_palindrome(i * j) and i * j > largest then
            largest = i * j
        end
    end
end

print(largest)
