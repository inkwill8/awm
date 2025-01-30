### Exercise 1: Basic Arrows Function
**Objective:** Define simple functions that use Arrow Syntax (=>).

**Made with `Deepseek-v2 16b parameter model`**

#### Task:
Write a function called `makeBold` which accepts one argument and returns
it in bold text. Use an arrow function to define this functionality, and
print the result when called with any string input.

### Example Solution
```javascript
const makeBold = str => `<strong>${str}</strong>`;
console.log(makeBold('This is some text')); // Should log: <strong>This is some text</strong>
```

### Exercise 2: Arrow Functions with Parameters and Return Statements
**Objective:** Use an Arrow Function to define a function that takes
parameters, uses multiple lines of code internally, but always returns the
sum of two numbers.

#### Task:
Create an arrow function named `sumInArrow` which accepts two arguments
(`num1`, `num2`), calculates their sum, and then logs this result using
console.log(). Use Arrow functions syntax for defining this function.

### Example Solution
```javascript
const sumInArrow = (num1, num2) => {
    const sum = num1 + num2;
    console.log(`The sum is: ${sum}`);
};

// Usage example - should log "5"
sumInArrow(2, 3);
```

### Exercise 3: Arrow Functions with Complex Logic and Multiple Parameters
**Objective:** Define an arrow function that performs more complex
operations like filtering an array based on a condition.

#### Task:
Write an arrow function named `filterNames` which accepts an array of
names as its parameter. This function should return only the names longer
than five characters, using JavaScript's native Array methods to achieve
this.

### Example Solution
```javascript
const filterNames = names => {
    const longNames = names.filter(name => name.length > 5);
    console.log(`Names with length greater than 5: ${longNames}`);
};

// Usage example - should log "John, Mike" because both are longer than
five characters
filterNames(['Alice', 'Bob', 'Mike', 'John']);
```

These exercises will help you understand how to use Arrow functions in
JavaScript for different coding scenarios. They start simple and gradually
increase the complexity by involving more parameters and logic within the
function's body, but always returning a value at the end of each arrow
function.