function filterRange(arr, a, b) {

	return	arr.filter(index => index >= a && index <= b);
}

let arr = [5, 3, 8, 1];

let filtered = filterRange(arr, 1, 4);

console.log(filtered);

console.log(arr);
