// Write the function camelize(str) that changes dash-separated words like “my-short-string” into camel-cased “myShortString”.

let string = `don't-be-evil`;

function camelize(str) {
	// search the inputted string for dashes
		let splitString = str.split('-');
		console.log(splitString);

	// capitalize each string except the first
		let capitalFirstLetters = splitString.map((str) => str.charAt(0).toUpperCase());

		let capitals = capitalFirstLetters.splice(1,2);
		console.log(capitals);

	// need to remove the first letters from the splitString array and append the capital letters to those indices
	// join the altered strings back into a single string
}

camelize(string);
