input = gets.chomp.to_i

def number_check(number)
  if number >= 0 and number <= 50
    puts "#{number} is between 0 and 50!"
  elsif number >= 51 and number <= 100
    puts "#{number} is between 51 and 100!"
  elsif number > 100 or number < 0
    puts "Woah there! That's out of range!"
  end
end

number_check (input)
