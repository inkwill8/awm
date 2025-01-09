function capitalize(string) {
    let inputString = string.toLowerCase(); // 'tHis Is a tEst' this saves the lowercase string to a variable
    let firstChar = inputString[0]; // [t] this takes the first letter of the string at the 0 index
    let restOfString = inputString.slice(1); // 'his is a test' this slices the rest of the string from the 1 index to the end

    return firstChar.toUpperCase() + restOfString; //This appends the capitalized first character to the rest of the lowercase string
}

console.log(capitalize('tHis Is a tEst'));
