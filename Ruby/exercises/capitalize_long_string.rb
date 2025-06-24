string = gets.chomp

# Check if the string is greater than or equal to 10 characters. If so, capitalize.
def capitalize_string(str)
if str.length > 10
  new_string = str.upcase
  puts new_string
else
  puts "#{str} is not ten characters."
end
return new_string
  end

capitalize_string (string)
