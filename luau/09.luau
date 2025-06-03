local function main(): number
    local result = 0

    for i = 1, 997 do
        for j = 1, 997 do
            for k = 1, 997 do
                if i + j + k == 1000 and (i * i) + (j * j) == k * k then
                    result = i * j * k
                    return result
                end
            end
        end
    end
end

print(main())
