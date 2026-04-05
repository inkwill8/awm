function Person(name, gender, age, occupation, hobby) {
  if (!new.target) {
    throw Error("Use the new keyword, buddy.");
  }

  this.name = name;
  this.gender = gender;
  this.age = age;
  this.occupation = occupation;
  this.hobby = hobby;

  let pronoun = this.gender == "male" ? "He" : "She";
  let possPronoun = pronoun == "He" ? "his" : "her";

  this.bio = function() {
    let bio =
      `${this.name} is ${this.age} years old and works as a ${this.occupation}. ` +
      `${pronoun} enjoys ${hobby} in ${possPronoun} free time.`;
    return bio;
  };
}

let seby = new Person(
  "Sebastien",
  "male",
  30,
  "student",
  "watches and fragrances",
);

console.log(seby.bio());
