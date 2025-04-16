function filterRangeInPlace(arr, a, b) {

	for (let i of arr) {
if (i <= a ||  i >=b) {
	arr.splice(i, 1);
}
}
}

let arr = [5, 3, 8, 1];

filterRangeInPlace(arr, 1, 4);

console.log(arr);
