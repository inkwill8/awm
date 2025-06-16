# Ruby Variables Summary

## What are Variables?
Variables are containers that store information in computer programs. They label data with descriptive names, making programs more readable and understandable.

## Assigning Variables
- Use the `=` symbol to assign values
- Variable name goes on the left, value on the right
- Example: `first_name = 'Joe'`
- Don't confuse `=` (assignment) with `==` (equality check)

## Getting User Input
- Use `gets` method to get user input
- `gets` includes a newline character (`\n`)
- Use `gets.chomp` to remove the newline character
- Example: `name = gets.chomp`

## Variable Scope
Variable scope determines where in a program a variable can be used.

### Method Definitions
- Methods have self-contained scope
- Variables inside methods can't be accessed outside
- Variables outside methods can't be accessed inside (unless passed as parameters)

### Blocks
- Blocks are code enclosed in `{}` or `do/end` that follow method calls
- **Key rule**: Inner scope can access outer variables, but outer scope cannot access inner variables
- Example: Variables defined inside `3.times do |n|` are not accessible outside the block

## Types of Variables

1. **Constants** - `MY_CONSTANT`
   - All uppercase letters
   - Should never change value
   - Available throughout the application

2. **Global Variables** - `$var`
   - Start with `$`
   - Available everywhere in the app
   - Generally avoided by Ruby developers

3. **Class Variables** - `@@instances`
   - Start with `@@`
   - Shared among all instances of a class
   - Must be initialized at class level

4. **Instance Variables** - `@var`
   - Start with `@`
   - Available throughout the current instance of a class

5. **Local Variables** - `var`
   - Most common type
   - No special prefix
   - Must be passed around to cross scope boundaries

## Key Takeaways
- Choose descriptive variable names
- Variables point to values in memory, not to each other
- Understand scope boundaries to avoid errors
- Local variables are the most commonly used type
