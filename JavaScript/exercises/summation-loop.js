for (let i = 0; i <= 5; i++) {
  let result = 4 * (9^i);
  let previousResult = 0; // Initialize to 0 for the first iteration
  if (i > 0) {
    previousResult = 4 * 9^(i - 1);
  }

  let sum = previousResult + result;
  console.log(`Iteration ${i}: ${result},
Sum = ${sum}`);
}
