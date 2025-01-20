# Switch Statement Syntax
==========================

The switch statement is a control structure that allows you to execute different blocks of code based on the 
value of an expression.

### Basic Syntax

```javascript
switch(expression) {
  case 'value1':  // if (expression === 'value1')
    ...
    [break]

  case 'value2':  // if (expression === 'value2')
    ...
    [break]

  default:
    ...
    [break]
}
```

### How It Works

The switch statement checks the value of `expression` for a strict equality to each case. If a match is found, 
the code starting from that case is executed until the nearest break or the end of the switch.

- **Matching**: The switch starts checking the expression's value against the first case (`value1`). If it 
matches, the code in the corresponding block is executed.
- **Multiple Matches**: If no break is encountered within a matched block, the code continues executing until a 
break statement is met or the end of the switch.
- **No Match**: If none of the cases match, the `default` block (if present) is executed.

### Example

```javascript
switch(x) {
  case 'value1':  // if (x === 'value1')
    console.log('Value 1 matched');
    [break]

  case 'value2':  // if (x === 'value2')
    console.log('Value 2 matched');
    [break]

  default:
    console.log('No value matched');
    [break]
}
```

Remember to include a break statement at the end of each matched block or use the `default` block if no match 
is found.