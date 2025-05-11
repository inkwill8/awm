const library = [
    { title: "Dune", author: "Frank Herbert" },
    { title: "To Kill a Mockingbird", author: "Harper Lee" },
    { title: "1984", author: "George Orwell" },
    { title: "Pride and Prejudice", author: "Jane Austen" },
    { title: "The Handmaid's Tale", author: "Margaret Atwood" }
];

function bookPicker(library) {
	let output = library.map((book) => [book.author, book. title]);
console.log(output);
};

bookPicker(library);
