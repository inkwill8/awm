# Logical Operators in JavaScript
=====================================

### Overview

JavaScript provides several logical operators that can be
used to combine conditions and make decisions based on
them.

### 1. `+=` - Addition Assignment Operator

*   **Note:** `+=` is not a logical operator but rather a
shorthand way of concatenating strings or adding values to
variables.
*   **Example:**
    ```javascript
let name = "John";
name += " Doe"; // Assigns " JohnDoe" to the variable name
console.log(name); // Output: "John Doe"
```

### 2. `!` - Logical NOT Operator

*   **Description:** The logical NOT operator (`!`)
returns true if its operand is false, and vice versa.
*   **Example:**
    ```javascript
let isAdmin = false;
if (!isAdmin) {
    console.log("You are not an admin");
} else {
    console.log("You are an admin");
}
// Output: You are not an admin
```

### 3. `?` - Nullish Coalescing Operator (Optional
Chaining)

*   **Description:** The nullish coalescing operator
(`??`) returns its right-hand side operand if its
left-hand side operand is null or undefined.
*   **Example:**
    ```javascript
let age = 25;
let formattedAge = age ?? 'Unknown';
console.log(formattedAge); // Output: "25"
```

### 4. `||` - Logical OR Operator

*   **Description:** The logical OR operator (`||`)
returns its left-hand side operand if it is true, and the
right-hand side operand if it is false.
*   **Example:**
    ```javascript
let age = 0;
let adult = (age >= 18) ? 'Adult' : 'Minor';
console.log(adult); // Output: "Minor"
```

### 5. `&&` - Logical AND Operator

*   **Description:** The logical AND operator (`&&`)
returns its left-hand side operand if it is true, and the
right-hand side operand if either of them is false.
*   **Example:**
    ```javascript
let isAdmin = true;
let hasPrivileges = true;
let hasAccess = (isAdmin && hasPrivileges) ? 'Admin' :
'Guest';
console.log(hasAccess); // Output: "Admin"
```