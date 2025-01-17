# The Structure of a Standard `for` Loop

### Introduction
The standard `for` loop is a fundamental construct in programming that allows for repetitive execution of a 
block of code.

```javascript
for (initializer; condition; final-expression) {
  // code to run
}
```

## The Components of a `for` Loop

### 1. Initializer
Initializer is the counter variable. What the loop keeps track of as it runs.

### 2. Condition
A condition defines when the loop should stop looping. This is generally an expression 
featuring a comparison operator, a test to see if the exit condition has been met.

### 3. Final Expression
A final-expression — this is always evaluated (or run) each time the loop has gone through 
a full iteration. It usually serves to increment (or in some cases decrement) the counter variable, 
to bring it closer to the point where the condition is no longer true.

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

