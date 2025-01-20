**parseInt() Method**
=====================

The `parseInt()` method is a built-in JavaScript function that converts a string representation of an integer 
into its corresponding numeric value.

### Syntax
```javascript
parseInt(string, radix)
```

*   `string`: The string to be converted.
*   `radix`: An optional parameter specifying the base of the number in `string`. If omitted (default), it's 
assumed to be 10 (decimal).

### Example Usage

Here is an example of using `parseInt()` to convert a string representation of an integer:

```javascript
let numStr = "123";
let numericValue = parseInt(numStr); // Returns 123

console.log(numericValue); // Output: 123
```

In this example, the `parseInt("123")` call converts the string `"123"` into its corresponding numeric value 
`123`. The second parameter is omitted (defaulting to 10), so it's assumed to be a decimal number.

### Note

The unary + operator can also be used to convert strings to numbers and has the added benefit of being able to convert
negative numbers as well.