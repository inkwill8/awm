# Define some arrays of names to use as input

harry_potter = ["Harry Potter", "Hermione Granger", "Ron Weasley", "Albus Dumbledore"]
lotr = ["Frodo Baggins", "Samwise Gamgee", "Gandalf", "Frodo Baggins"]
hunger_games = ["Katniss Everdeen", "Peeta Mellark", "Gale Hawthorne", "Katniss Everdeen", "Peeta Mellark"]
star_wars = ["Luke Skywalker", "Han Solo", "Princess Leia", "Chewbacca", "Luke Skywalker"]
marvel = ["Tony Stark", "Steve Rogers", "Bruce Banner", "Natasha Romanoff", "Clint Barton", "Thor Odinson", "Wanda Maximoff", "Vision", "Peter Parker", "Miles Morales"]
sherlock_holmes = ["Sherlock Holmes", "John Watson", "Molly Hooper", "Mycroft Holmes", "Sherlock Holmes", "James Moriarty", "John Watson", "Irene Adler"]

# Define a method that takes an array as input and analyzes if there are any duplicates

def check_duplicates(array) 
    result = false
    i = 0
    checked_names = [] # new array to hold past checked names

    while i < array.size do
        current_element = array[i] # var to hold value of current element
        if checked_names.include?(current_element)
          result = true
          break
       end
        checked_names.push(current_element)
         i += 1
      end
    return result
end

puts check_duplicates(harry_potter) #false
puts check_duplicates(lotr) #true
puts check_duplicates(hunger_games) #true
puts check_duplicates(star_wars) #true
puts check_duplicates(marvel) #false
puts check_duplicates(sherlock_holmes) #true
