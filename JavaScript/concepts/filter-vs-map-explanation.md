# Filter vs Map Methods in JavaScript

The `filter()` and `map()` methods are both array methods in JavaScript, but they serve different purposes:

## The filter() Method

`filter()` creates a new array containing only the elements that pass a specified condition (test function).

**Key characteristics:**
- Returns a subset of the original array
- The returned elements remain unchanged
- The result array may have fewer elements than the original

**Example:**

```javascript
const numbers = [1, 2, 3, 4, 5, 6];
const evenNumbers = numbers.filter(number => number % 2 === 0);

console.log(evenNumbers); // Output: [2, 4, 6]
```

In this example, the filter keeps only the elements that return `true` for the condition `number % 2 === 0` (even numbers).

## The map() Method

`map()` creates a new array by transforming each element of the original array according to a provided function.

**Key characteristics:**
- Returns the same number of elements as the original array
- Each element is transformed based on the function
- The original array remains unchanged

**Example:**

```javascript
const numbers = [1, 2, 3, 4, 5];
const doubled = numbers.map(number => number * 2);

console.log(doubled); // Output: [2, 4, 6, 8, 10]
```

Here, `map()` transforms each number by multiplying it by 2.

## Practical Comparison

Let's look at a more practical example with objects:

```javascript
const users = [
  { name: "John", age: 25, active: true },
  { name: "Pete", age: 30, active: false },
  { name: "Mary", age: 28, active: true }
];

// filter() - get only active users
const activeUsers = users.filter(user => user.active);
console.log(activeUsers);
/* Output:
[
  { name: "John", age: 25, active: true },
  { name: "Mary", age: 28, active: true }
]
*/

// map() - extract just the names
const userNames = users.map(user => user.name);
console.log(userNames); // Output: ["John", "Pete", "Mary"]
```

## Combining filter() and map()

You can chain these methods for more complex operations:

```javascript
const users = [
  { name: "John", age: 25, active: true },
  { name: "Pete", age: 30, active: false },
  { name: "Mary", age: 28, active: true }
];

// Get names of active users
const activeUserNames = users
  .filter(user => user.active)
  .map(user => user.name);

console.log(activeUserNames); // Output: ["John", "Mary"]
```

In the original example with `filter(user => user.name)`, all objects were kept because all name properties were truthy, but it wasn't extracting just the name property - that's what `map()` does.
