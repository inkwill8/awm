**The Call Stack**
==================

In JavaScript, the call stack is a data structure that stores information about the functions currently 
executing in your program.

**How it Works**
-----------------

Here's a step-by-step breakdown:

1.  **Function Call**: When you call a function, its code block is added to the top of the call stack.
2.  **Execution**: The function starts executing from the beginning of its code block.
3.  **Return**: When the function reaches the end of its code block (i.e., it encounters a `return` statement), 
its execution stops and its code block is removed from the top of the call stack.
4.  **Stack Management**: As functions are called and return, their positions on the call stack change:
    *   New function calls add to the top of the stack.
    *   Return statements remove a function from the top of the stack.

**Example Walkthrough**
----------------------

Suppose you have this code:

```javascript
function outer() {
  console.log("Outer started");

  inner();

  console.log("Outer finished");
}

function inner() {
  console.log("Inner started");

  setTimeout(() => {
    console.log("Timeout in inner");
  }, 1000);

  console.log("Inner finished");
}
```

Here's what happens when you call `outer()`:

1.  `outer()` is called, and its code block is added to the top of the call stack.
2.  The outer function logs "Outer started" and calls the inner function.
3.  The inner function starts executing, logging "Inner started".
4.   A timeout is set for 1 second, adding a new entry to the top of the call stack with its code block.
5.  After 1 second, the timeout callback logs "Timeout in inner" and removes itself from the call stack.
6.  The inner function continues executing, logging "Inner finished".
7.  Finally, the outer function's execution resumes, logging "Outer finished".

**The Call Stack is LIFO (Last-In-First-Out)**
------------------------------------------

The call stack operates on a Last-In-First-Out (LIFO) principle. This means that the most recently added entry 
to the top of the stack will be executed first.

This structure helps JavaScript maintain a record of function executions and allows for efficient management of 
complex computations.

**Example Image**
---------------

![the-pyramid-structure-of-the-call-stack](img/JavaScript-Call-Stack.png)

**Note**
-------

JavaScript is a single-threaded programming language. This means that the JavaScript engine has only one call stack. Therefore, it only can do one thing at a time.

When executing a script, the JavaScript engine executes code from top to bottom, line by line. In other words, it is synchronous.