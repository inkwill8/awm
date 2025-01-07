**Table Creation with JavaScript's `console.table` Method**
===========================================================

Thank god for the Odin Project! I just learned that JavaScript has a method where you can create a table of data from an array
automatically.

**Overview**
------------

The `console.table` method is a built-in function in Node.js that allows us to create tables from arrays of 
data. It provides a convenient way to display tabular data, making it easier to visualize and analyze.

### How it Works
-----------------

The `console.table` method takes an array as an argument and displays it in a table format with headers for 
each column. By default, the first element of each row becomes the header value, and subsequent elements are 
displayed as regular text.

**Example Usage**
----------------

Here's an example of how to use the `console.table` method:

```javascript
let lordOfTheRings = [
    {firstName: 'Frodo', lastName: 'Baggins', place: 'Bag End, The Shire'},
    {firstName: 'Samwise', lastName: 'Gamgee', place: 'The Shire'},
    {firstName: 'Aragorn', lastName: 'Son of Arathorn', place: 'Minas Tirith, Gondor'},
    {firstName: 'Legolas', lastName: 'Elfkind', place: 'Lothlorien'},
    {firstName: 'Gimli', lastName: 'Son of Gloin', place: 'Ered Luin, the Blue Mountains'},
    {firstName: 'Boromir', lastName: 'Captain of the White Tower', place: 'Minas Tirith, Gondor'}
]

console.table(lordOfTheRings);
```

### Output
----------

| (index) | firstName      | lastName        | place                                                            
                                                                                                                
                                                              |
| --- | --- | --- | --- |
| 0    | Frodo          | Baggins         | Bag End, The Shire                                                  
                                                                                 |
| 1    | Samwise        | Gamgee          | The Shire                                                           
                                                                  |
| 2    | Aragorn        | Son of Arathorn | Minas Tirith, Gondor                                                
                                                             |
| 3    | Legolas        | Elfkind         | Lothlorien                                                          
                                                         |
| 4    | Gimli           | Son of Gloin    | Ered Luin, the Blue Mountains                                      
                                                                                                        |
| 5    | Boromir        | Captain of the | Minas Tirith, Gondor                                                 
                                                      |

**Advantages**
-------------

*   Easy to use and understand
*   Automatically generates headers for each column
*   Displays tabular data in a clean and organized format

By using the `console.table` method, we can create visually appealing tables from our arrays of data, making it 
easier to analyze and understand complex information.