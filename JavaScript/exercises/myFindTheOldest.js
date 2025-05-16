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
        const ages = arrayOfPeople.map((person) => [person.yearOfDeath - person.yearOfBirth]);


	let largestAge = function (array) {
	let oldest = array.reduce((largest, current) => current > largest ? current : largest)
		return oldest;
};
	
	function matchAgeToPerson(arrayOfPeople) {
		return	arrayOfPeople.map((person) => person === largestAge ? person.name : 'uh oh'); 


};

console.log(ages);
largestAge(ages);
matchAgetoPerson(people);

};

findTheOldest(people);
