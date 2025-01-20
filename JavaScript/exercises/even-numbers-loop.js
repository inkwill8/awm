// write a for loop that outputs even numbers from 2 to 10

// an even number is just a number where when divided by 2, it has no remainder

for (let i = 2; i <= 10; i++) {
    if (i % 2 !== 0) {
        continue;
    }
    console.log(i);
}