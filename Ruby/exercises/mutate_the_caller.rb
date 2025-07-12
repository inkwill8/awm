def mutate(arr)
  arr.pop
end

def no_mutate(arr)
  arr.select {|i| i > 3}
end

a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

mutate(a)
print a
puts ''
print no_mutate(a)
puts ''
