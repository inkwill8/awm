array = [1, 2, 3, 4, 5, 6, 7, 8]
p array
array_two = array.map do |index|
  index + 2
end
p array_two
