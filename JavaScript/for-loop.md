### What is a `for` Loop?

A `for` loop is a type of loop where the code inside the loop body is executed **over a fixed number of 
iterations**. It's like counting how many times you spin around the merry-go-round – you know exactly how many 
times it will take!

**The `for` loop cares about the number of iterations.**

**Example:**
```javascript
for (let i = 0; i < 5; i++) {
    console.log("Hello, world!");
}
```
In this example, the code inside the loop body (`console.log("Hello, world!")`) is executed **over a fixed 
number of iterations**: `i` ranges from 0 to 4. When `i` reaches 5, the loop exits.

**How it works:**

1. The initialization statement is executed only once, before the loop starts.
2. The condition is checked after each iteration.
3. If the condition is true, the code inside the loop body is executed.
4. Steps 2-3 repeat until the condition becomes false.

**Breakdown of the example:**

* Initially, `i` is 0.
* The initialization statement is executed only once:
        + `let i = 0;`
* The condition is checked for the first time: `0 < 5`. Since it's true, the loop body is executed.
        + ... and so on ...
        + `console.log("Hello, world!")` prints "Hello, world!" to the console. (For each iteration of `i`, this will 
print once.)
* Steps 2-4 repeat until `i` reaches or exceeds 5:
        + For `i = 1`, the condition is still true (`1 < 5`), so we execute the loop body.
        + ... and so on ...
* When `i` finally reaches 5, the condition becomes false (`5 >= 5`), so we exit the loop.

**Your turn!**

Can you write a simple `for` loop that prints numbers from 1 to 10?

**Tips:**

* In JavaScript, we use `let` instead of `var` for variable declarations.
* We use `console.log()` to print output to the console.
* The syntax for incrementing a variable is `i++`.

Note: This code will run in a Node.js environment or any modern web browser that supports JavaScript. If you're 
running this in a different environment, you may need to adjust the syntax slightly.

Here's an example of using a `for` loop with an array:
```javascript
const fruits = ["Apple", "Banana", "Cherry"];

for (let i = 0; i < fruits.length; i++) {
    console.log(fruits[i]);
}
```
This will print each fruit in the array, one at a time.

# A note on data structures

This is very introductory for me, but being able to iterate over an array gives you so many options when 
it comes to categorizing data or presenting it in different ways. Take the below example:

```javascript
const lordOfTheRings = [
...   { name: "Frodo Baggins", from: "Shire", weapon: "Sting" },
...   { name: "Samwise Gamgee", from: "Shire", weapon: "No Weapon (but skilled with garden tools)" },
...   { name: "Aragorn (Strider)", from: "Dunedain", weapon: "Anduril" },
...   { name: "Legolas", from: "Mirkwood", weapon: "Longbow and Quiver full of arrows" },
...   { name: "Gandalf the Grey", from: "Middle-earth", weapon: "Staff" },
...   { name: "Boromir", from: "Gondor", weapon: " spear (later replaced by sword)" },
...   { name: "Gollum", from: "Anduin Valley", weapon: "Rock and Stick" },
...   { name: "Sauron", from: "Mordor", weapon: "Ring of Power" },
...   { name: "Éowyn", from: "Rohan", weapon: "Lasso of Galadriel" },
...   { name: "Merry Brandybuck", from: "Shire", weapon: "Staff (as a member of the Fellowship)" }
... ]

for (const character of lordOfTheRings) {
... console.log(character);
... }
{ name: 'Frodo Baggins', from: 'Shire', weapon: 'Sting' }
{
  name: 'Samwise Gamgee',
  from: 'Shire',
  weapon: 'No Weapon (but skilled with garden tools)'
}
{ name: 'Aragorn (Strider)', from: 'Dunedain', weapon: 'Anduril' }
{
  name: 'Legolas',
  from: 'Mirkwood',
  weapon: 'Longbow and Quiver full of arrows'
}
{ name: 'Gandalf the Grey', from: 'Middle-earth', weapon: 'Staff' }
{
  name: 'Boromir',
  from: 'Gondor',
  weapon: ' spear (later replaced by sword)'
}
{ name: 'Gollum', from: 'Anduin Valley', weapon: 'Rock and Stick' }
{ name: 'Sauron', from: 'Mordor', weapon: 'Ring of Power' }
{ name: 'Éowyn', from: 'Rohan', weapon: 'Lasso of Galadriel' }
{
  name: 'Merry Brandybuck',
  from: 'Shire',
  weapon: 'Staff (as a member of the Fellowship)'
}
```

