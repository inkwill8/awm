function Book(title, author, pages, read) {
  if (!new.target) {
    throw Error("Use the new keyword, dummy.");
  }

  this.title = title;
  this.author = author;
  this.pages = pages;
  this.read = read;

  this.info = function() {
    let readStatus = this.read ? "I've read this" : "not read";
    return (
      this.title +
      " by " +
      this.author +
      ", " +
      this.pages +
      " pages, " +
      readStatus
    );
  };
}

// Test the constructor
let dune = new Book("Dune", "Frank Herbert", 695, true);
let fourthWing = new Book("Fourth Wing", "some bitch", 69420, false);

console.log(dune.info());
console.log(fourthWing.info());
