**User-Defined Functions for Beginners**
=====================================

Here's a simple guide to getting started with user-defined functions in JavaScript:

### What is a User-Defined Function?

A user-defined function is a block of code that can be executed multiple times from different parts of your 
program. It allows you to reuse the same code with different inputs.

### Basic Structure of a User-Defined Function

```javascript
function functionName(parameters) {
  // function body
}
```

*   `functionName`: The name of the function.
*   `parameters`: A comma-separated list of variables that will be passed to the function when it's called.
*   `functionBody`: The code that will be executed when the function is called.

### Example of a Simple User-Defined Function

```javascript
function sum(param1, param2) {
        return param1 + param2;
    }

    sum(1,2);
```

In this example:

*   We define a function named `sum` that takes two parameters `param1` and `param2`.
*   Inside the function, we use the `return` method to add the value of the two parameters together.
*   When we call the `sum()` function with arguments `1,2`, it executes the code inside the function and 
prints out the sum.

**Best Practices for Function Naming**
=====================================

Functions are actions. So their name is usually a verb. It should be brief, as accurate as possible and 
describe what the function does.

### Verbal Prefixes
It is a widespread practice to start a function with a verbal prefix which vaguely describes the action. There 
must be an agreement within the team on the meaning of the prefixes.

**Common Prefixes**
-------------------

*   **"get_"**: return a value,
*   **"calc_"**: calculate something,
*   **"create_"**: create something,
*   **"check_"**: check something and return a boolean, etc.

### Examples
-------------

*   `showMessage(..)`      // shows a message
*   `getAge(..)`          // returns the age (gets it somehow)
*   `calcSum(..)`         // calculates a sum and returns the result
*   `createForm(..)`      // creates a form (and usually returns it)
*   `checkPermission(..)` // checks a permission, returns true/false

### Benefits
------------

With prefixes in place, a glance at a function name gives an understanding what kind of work it does and what 
kind of value it returns. This makes the code more readable and easier to understand for other developers.