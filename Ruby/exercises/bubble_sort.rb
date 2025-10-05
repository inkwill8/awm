arr = [2, 96, 69, 42, 8, 14]

for i in 0...arr.length do
  for j in 1...arr.length do
    if arr[j - 1] > arr[j]
      temp = arr[j]
      arr[j] = arr[j - 1]
      arr[j - 1] = temp
    end
  end
end

puts arr
