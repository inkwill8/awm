### What is Recursion?

Recursion is a programming technique where a function calls itself. Yes, you 
read that right! The same function that's being executed can call itself 
during its execution.

### How Does it Work?

Imagine you're trying to build a tower with blocks of different heights. You 
start by placing the first block (the base). Then, for each subsequent block, 
you place it on top of the previous two blocks. This is similar to how 
recursion works:

1. **Base Case**: A recursive function has a base case that stops the 
recursion. In our `fibonacci` example, when `number` equals 0 or 1, we simply 
return the value.
2. **Recursive Call**: If the current block (or function call) doesn't meet 
the base case, we break it down into smaller sub-problems by calling the same 
function again, but with a smaller input. In our example, when `number` is 
greater than 1, we call `fibonacci(number - 1)` and `fibonacci(number - 2)`.
3. **Solution**: By recursively breaking down the problem into smaller 
sub-problems and solving each one, the function eventually reaches its base 
case and returns a solution.

### Example Walkthrough (Simplified)

Suppose we want to calculate the first five numbers in the Fibonacci sequence:
`fibonacci(5)` calls `fibonacci(4)` and `fibonacci(3)`
`fibonacci(4)` calls `fibonacci(3)` and `fibonacci(2)`
`fibonacci(3)` calls `fibonacci(2)` and `fibonacci(1)`
`fibonacci(2)` calls `fibonacci(1)` and `fibonacci(0)`
`fibonacci(1)` returns 1 (base case)
`fibonacci(0)` returns 0 (base case)

The recursive calls continue until the base cases are met, and then the 
solutions start returning:

`fibonacci(2)` = `fibonacci(1)` + `fibonacci(0)` = 1 + 0 = 1
`fibonacci(3)` = `fibonacci(2)` + `fibonacci(1)` = 1 + 1 = 2
`fibonacci(4)` = `fibonacci(3)` + `fibonacci(2)` = 2 + 1 = 3
`fibonacci(5)` = `fibonacci(4)` + `fibonacci(3)` = 3 + 2 = 5

The final result is returned: `fibonacci(5) = 5`

