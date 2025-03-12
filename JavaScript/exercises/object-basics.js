let salaries = {
    John: 100,
    Ann: 160,
    Pete: 130
}

let sum = 0;

for (let key in salaries) {
    sum += salaries[key];
}

console.log(sum);

// next exercise

let menu = {
    width: 200,
    height: 300,
    title: "My menu"
  };

  function multiplyNumeric(obj) {
    for (let key in obj) {
        if (typeof obj[key] === 'number') {
           obj[key] = obj[key] * 2;
    }
    }
  }

  multiplyNumeric(menu);

  // next exercise

  // let evenSum = 0;

  // let inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

  // function sumOfTripledEvens(array) {
  //   for (let i = 0; i < array.length; i++) {
  //     if (array[i] % 2 === 0) {
  //       let tripleEvenSum = array[i] * 3;
  //      evenSum += tripleEvenSum;
  //     }
  //   }

  //   return evenSum;
  // }

  // sumOfTripledEvens(inputArray);

  // rewrite sumOfTripledEvens() using .map, .filter, and .reduce

 // Use .filter to pull only the even numbers out

 let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

 function isEven(num) {
  return num % 2 == 0;
 }

 let filteredArray = array.filter(isEven);

 // Use .map to triple each even index

 function tripleNumbers(num) {
  return num * 3;
 }

 let tripledNumbers = filteredArray.map(tripleNumbers);

 // Use .reduce to sum all these numbers together

const sumOfAllNumbers = tripledNumbers.reduce((total, currentItem) => {
  return total + currentItem;
});