**Arrow Functions**
==================

An arrow function is a concise way to define small, single-purpose functions in JavaScript.

**Basic Syntax**
-----------------

The syntax for an arrow function is as follows:

```javascript
(parameters) => {
  // function body
}
```

For example:

```javascript
const add = (x, y) => x + y;
console.log(add(2, 3)); // Output: 5
```

**Key Features**
----------------

*   **No explicit `return` statement**: The expression after the arrow (`=>`) is automatically returned.
*   **Lambda-like syntax**: Arrow functions are similar to lambda functions in other languages.

**When to Use Arrow Functions**
---------------------------------

Use arrow functions when:

*   You need a small, one-time-use function.
*   You want a more concise way of defining a simple function.
*   You're working with modern JavaScript features (ES6+).