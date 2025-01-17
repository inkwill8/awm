# `do-while` loops

### What is a `do-while` Loop?

A `do-while` loop is a type of loop where the code inside the loop body is executed **at least once**, before 
the condition is checked. It's like the merry-go-round is already in motion when you get on – it keeps spinning 
until you tell it to stop.

**The 'do-while' loop cares about the existence or non-existence of the condition.**


**Example:**
```javascript
let i = 0;
do {
    console.log("Hello, world!");
    i++;
} while (i < 5);
```
In this example, the code inside the loop body (`console.log("Hello, world!")` and `i++`) is executed **at 
least once**, because of the `do-while` clause. The condition `i < 5` is checked after the first iteration.

**How it works:**

1. The code inside the loop body is executed.
2. The condition is checked.
3. If the condition is true, the loop repeats (goes back to step 1).
4. If the condition is false, the loop exits.

**Breakdown of the example:**

* Initially, `i` is 0.
* The code inside the loop body is executed once:
        + `console.log("Hello, world!")` prints "Hello, world!" to the console.
        + `i++` increments `i` to 1.
* Now, `i` is 1, so we check the condition: `1 < 5`. Since it's true, the loop repeats.
* Steps 1-4 are repeated until `i` reaches or exceeds 5.