puts "What is your first name?"
first_name = gets.chomp
puts "What is your last name?"
last_name = gets.chomp
greeting = "Hello there #{first_name + " " + last_name} it's nice to meet you!"
puts greeting

10.times do |n|
 puts first_name + " " + last_name
end
