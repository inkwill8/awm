# `while` loops

### What is a `while` Loop?

A `while` loop is a type of loop where the code inside the loop body is executed **as long as** a certain 
condition is true. It's like the merry-go-round starts moving only if someone gets on and tells it to start 
spinning!

**The `while` loop cares about the value of the condition.**


**Example:**
```javascript
let i = 0;
while (i < 5) {
    console.log("Hello, world!");
    i++;
}
```
In this example, the code inside the loop body (`console.log("Hello, world!")` and `i++`) is executed **as long 
as** the condition `i < 5` is true. When `i` reaches or exceeds 5, the loop exits.

**How it works:**

1. The condition is checked.
2. If the condition is true, the code inside the loop body is executed.
3. After executing the code, the condition is checked again.
4. Steps 1-3 repeat until the condition becomes false.

**Breakdown of the example:**

* Initially, `i` is 0.
* The condition is checked: `0 < 5`. Since it's true, the loop body is executed.
        + `console.log("Hello, world!")` prints "Hello, world!" to the console.
        + `i++` increments `i` to 1.
* Now, `i` is 1, so we check the condition again: `1 < 5`. Since it's true, the loop body is executed again.
        + ... and so on ...
* Steps 2-4 repeat until `i` reaches or exceeds 5.

**Your turn!**

Can you write a simple `while` loop that prints numbers from 10 to 15?

**Tips:**

* In JavaScript, we use `let` instead of `var` for variable declarations.
* We use `console.log()` to print output to the console.
* The syntax for incrementing a variable is `i++`.

Note: This code will run in a Node.js environment or any modern web browser that supports JavaScript. If you're 
running this in a different environment, you may need to adjust the syntax slightly.
