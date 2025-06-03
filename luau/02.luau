local a = 1
local b = 2
local c = 0
local temp = 0

while b < 4_000_000 do
    if b % 2 == 0 then
        c += b
    end

    temp = a
    a = b
    b += temp
end

print(c)
