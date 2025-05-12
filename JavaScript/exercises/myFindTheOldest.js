const people = [
	{
	 name: "Carly",
	 yearOfBirth: 1942,
	 yearOfDeath: 1970,
	},
	{
	 name: "Ray",
	 yearOfBirth: 1962,
	 yearOfDeath: 2011,
	},
	{
         name: "Jane",
         yearOfBirth: 1912,
         yearOfDeath: 1941,
        },
];
function findTheOldest(arrayOfPeople) {
        let ages = arrayOfPeople.map((person) => [person.yearOfDeath - person.yearOfBirth]);

	function largestAge(array) {
		let oldest = array.reduce((largest, current) => current > largest ? current : largest);
	
		console.log(oldest);
};



console.log(ages);
largestAge(ages);

	let oldestPerson = arrayOfPeople.map((person) => person.
};

findTheOldest(people);
