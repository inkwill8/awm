**Conditional Statements in JavaScript**
=====================================

### 1. `if` Statement

Usage: Check for a condition and execute a block of code if it's true.

Example:
```javascript
let x = 5;
if (x > 10) {
  console.log("x is greater than 10");
} else {
  console.log("x is less than or equal to 10");
}
// Output: "x is less than or equal to 10"
```
Use when: You want to check a condition and perform an action if it's true, while keeping the alternative code 
as a backup.

### 2. `if/else` Statement

Usage: Check for multiple conditions and execute different blocks of code based on which condition is true.

Example:
```javascript
let x = 5;
if (x > 10) {
  console.log("x is greater than 10");
} else if (x === 5) {
  console.log("x is equal to 5");
} else {
  console.log("x is less than 5");
}
// Output: "x is less than 5"
```
Use when: You need to check multiple conditions and take different actions based on which condition is true.

### 3. `switch` Statement

Usage: Check the value of a variable against multiple values and execute corresponding blocks of code.

Example:
```javascript
let day = "Sunday";
switch (day) {
  case "Monday":
    console.log("It's Monday");
    break;
  case "Tuesday":
    console.log("It's Tuesday");
    break;
  default:
    console.log("It's not Monday or Tuesday");
}
// Output: "It's not Monday or Tuesday"
```
Use when: You need to check the value of a variable against multiple values and execute different actions based 
on which value is true.

### 4. Ternary Operator (Conditional Expression)

Usage: Concise way to express if/else statements using a single expression.

Example:
```javascript
let x = 5;
console.log(x > 10 ? "x is greater than 10" : "x is less than or equal to 10");
// Output: "x is less than or equal to 10"
```
Use when: You want a concise way to express simple if/else logic, especially in cases where you don't need to 
perform any actions.

### 5. `switch` with Regular Expressions (ES2018+)

Usage: Check the value of a variable against multiple patterns using regular expressions.

Example:
```javascript
let day = "Sunday";
switch (day) {
  case /^Monday$/i:
    console.log("It's Monday");
    break;
  case /^Tuesday$/i:
    console.log("It's Tuesday");
    break;
}
// Output: "It's not Monday or Tuesday"
```
Use when: You need to check the value of a variable against multiple patterns using regular expressions, 
especially in cases where you want to perform case-insensitive matching.