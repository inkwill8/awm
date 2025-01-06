let name = prompt(`What is the 'official' name of JavaScript?`, "");

if (name == "ECMAScript") {
  alert("Right!");
} else {
  alert(`You don't know? "ECMAScript!"`);
}

//

let numbPrompt = prompt("Give me a number!", "");

if (numbPrompt > 0) {
  alert("1");
} else if (numbPrompt < 0) {
  alert("-1");
} else {
  alert("0");
}

//

// Rewrite this using the ternary operator '?':
// let result;
// if (a + b < 4) {
//   result = 'Below';
// } else {
//   result = 'Over';
// }

let result = a + b < 4 ? "Below" : "Over";

//

let message =
  login == "Employee"
    ? "Hello"
    : login == "Director"
      ? "Greetings"
      : login == ""
        ? "No login"
        : "";
