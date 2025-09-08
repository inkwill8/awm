# Goods' prices variables
sword = 5
shield = 8
potion = 3.0

puts "------------------------------------------------------"
puts "|      Welcome to Gentle Gerry's Generic Goods!      |"
puts "|                                                    |"
puts "|           Sword 5 gold                             |"
puts "|           Shield 8 gold                            |"
puts "|           Potion 3 gold per ounce                  |"
puts "|                                                    |"
puts "|                                                    |"
puts "|                                                    |"
puts "|                                                    |"
puts "------------------------------------------------------"

puts "How many swords would you like?"
user_sword_count = gets.chomp.to_i

puts "How many shields would you like?"
user_shield_count = gets.chomp.to_i

puts "How many ounces of potion would you like?"
user_potion_count = gets.chomp.to_f

# Define a method to calculate the prices
def calculate_price(item_count, item_price)
   result = item_count * item_price
   return result;
end

# Assign some variables to the calculate_price method with the arguments passed
sword_price = calculate_price(user_sword_count, sword).to_s
shield_price = calculate_price(user_shield_count, shield).to_s
potion_price = calculate_price(user_potion_count, potion).to_s

puts "#{user_sword_count} swords is #{sword_price} gold"
puts "#{user_shield_count} shields is #{shield_price} gold"
puts "#{user_potion_count} ounces of potion is #{potion_price} gold"

