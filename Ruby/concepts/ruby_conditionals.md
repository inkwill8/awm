# Ruby Conditionals: A Simple Guide

Conditionals in Ruby let you make decisions in your code. They allow your program to execute different blocks of code based on whether certain conditions are true or false.

## Basic If Statement

The `if` statement runs code only when a condition is true:

```ruby
age = 18

if age >= 18
  puts "You can vote!"
end
```

## If-Else Statement

Use `else` to specify what happens when the condition is false:

```ruby
temperature = 15

if temperature > 20
  puts "It's warm outside"
else
  puts "It's cool outside"
end
```

## If-Elsif-Else Statement

Use `elsif` to check multiple conditions in sequence:

```ruby
score = 85

if score >= 90
  puts "Grade: A"
elsif score >= 80
  puts "Grade: B"
elsif score >= 70
  puts "Grade: C"
elsif score >= 60
  puts "Grade: D"
else
  puts "Grade: F"
end
```

## Comparison Operators

Ruby uses these operators to compare values:

- `==` equal to
- `!=` not equal to
- `>` greater than
- `<` less than
- `>=` greater than or equal to
- `<=` less than or equal to
- `<=>` spaceship operator (returns -1, 0, or 1)

```ruby
name = "Alice"

if name == "Alice"
  puts "Hello Alice!"
end

number = 10

if number != 5
  puts "Number is not 5"
end

# Spaceship operator examples
puts 5 <=> 3   # Returns 1 (5 is greater than 3)
puts 3 <=> 5   # Returns -1 (3 is less than 5)
puts 5 <=> 5   # Returns 0 (5 equals 5)

# Useful for sorting
numbers = [3, 1, 4, 1, 5]
sorted = numbers.sort { |a, b| a <=> b }
puts sorted    # [1, 1, 3, 4, 5]
```

## Object Equality Methods

Ruby provides different ways to check equality between objects:

### .eql?() Method

The `.eql?()` method checks if two objects have the same value AND the same type:

```ruby
# Same value, same type
puts 5.eql?(5)        # true
puts "hello".eql?("hello")  # true

# Same value, different type
puts 5.eql?(5.0)      # false (Integer vs Float)
puts 1.eql?(1.0)      # false

# Use in conditionals
age = 25
if age.eql?(25)
  puts "Age is exactly 25 (Integer)"
end
```

### .equal?() Method

The `.equal?()` method checks if two variables refer to the exact same object in memory:

```ruby
str1 = "hello"
str2 = "hello"
str3 = str1

puts str1.equal?(str2)  # false (different objects)
puts str1.equal?(str3)  # true (same object)

# Numbers and symbols are special cases
puts 5.equal?(5)        # true (same object)
puts :symbol.equal?(:symbol)  # true (same object)

# Use in conditionals
if str1.equal?(str3)
  puts "These variables point to the same object"
end
```

### Quick Comparison Summary

- `==` checks value equality (most common)
- `.eql?()` checks value and type equality
- `.equal?()` checks if it's the exact same object

```ruby
a = 5
b = 5.0

puts a == b       # true (same value)
puts a.eql?(b)    # false (different types)
puts a.equal?(b)  # false (different objects)
```

## Concise Notation (Inline If)

Ruby allows you to write simple conditionals on a single line by putting the `if` statement at the end:

```ruby
puts "This is true" if 1 < 2
puts "You're an adult" if age >= 18
puts "It's freezing!" if temperature < 0

# You can also use unless for negative conditions
puts "You're not old enough" unless age >= 18
```

This inline style is great for simple, one-line actions. It reads almost like English: "Do this IF that condition is true."

## Case Statements

Case statements provide a clean way to handle multiple conditions, especially when comparing one value against many possibilities:

```ruby
grade = 'B'

case grade
when 'A'
  puts "Excellent work!"
when 'B'
  puts "Good job!"
when 'C'
  puts "You passed"
when 'D'
  puts "You barely passed"
when 'F'
  puts "You failed"
else
  puts "Invalid grade"
end
```

You can also check multiple values in one `when` clause:

```ruby
day = "Saturday"

case day
when "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
  puts "It's a weekday"
when "Saturday", "Sunday"
  puts "It's the weekend!"
else
  puts "Invalid day"
end
```

Case statements can also work with ranges and patterns:

```ruby
score = 85

case score
when 90..100
  puts "Grade: A"
when 80...90
  puts "Grade: B"
when 70...80
  puts "Grade: C"
when 60...70
  puts "Grade: D"
else
  puts "Grade: F"
end
```

## Ternary Operator

Ruby supports the ternary operator, which works very similarly to JavaScript. It's a shorthand for simple if-else statements:

```ruby
# Basic syntax: condition ? value_if_true : value_if_false

age = 20
status = age >= 18 ? "adult" : "minor"
puts status  # "adult"

# More examples
weather = "sunny"
activity = weather == "sunny" ? "go to the beach" : "stay inside"

temperature = 25
clothing = temperature > 20 ? "shorts" : "jacket"

# You can use it directly in puts
puts age >= 21 ? "Can drink alcohol" : "Cannot drink alcohol"
```

Just like in JavaScript, use the ternary operator for simple conditions, but stick to regular if-else statements for more complex logic to keep your code readable.

## Logical Operators

You can combine conditions using logical operators:

```ruby
age = 25
has_license = true

# AND operator (&&)
if age >= 18 && has_license
  puts "You can drive!"
end

# OR operator (||)
day = "Saturday"
if day == "Saturday" || day == "Sunday"
  puts "It's the weekend!"
end

# NOT operator (!)
logged_in = false
if !logged_in
  puts "Please log in"
end
```

## Key Points to Remember

- Ruby conditionals don't need parentheses around conditions (though you can use them)
- Every `if` must end with `end`
- Ruby considers `false` and `nil` as "falsy" - everything else is "truthy"
- Use inline conditionals for simple, single-line actions
- Chain multiple conditions with `elsif` rather than nesting multiple `if` statements