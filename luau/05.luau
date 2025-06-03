local x = 20

while not (x % 11 == 0 and x % 13 == 0 and x % 14 == 0 and x % 16 == 0 and
            x % 17 == 0 and x % 18 == 0 and x % 19 == 0 and x % 20 == 0) do
    x += 20
end

print(x)
