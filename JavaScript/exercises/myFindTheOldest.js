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
    // Calculate ages as numbers, not arrays
    const ages = arrayOfPeople.map((person) => person.yearOfDeath - person.yearOfBirth);
    console.log("Ages:", ages);

    let largestAge = function(arrayOfAges) {
        let oldest = arrayOfAges.reduce((largest, current) => current > largest ? current : largest);
        console.log("Oldest age:", oldest);
        return oldest;
    };
	const oldestAge = largestAge(ages);

   function matchAgeToPerson(arrayOfPeople) {
    return arrayOfPeople.map((person) => {
        if (person.yearOfDeath - person.yearOfBirth === oldestAge) {
            return person.name;
        } else {
            return 'Not a match!';
        }
    });
}; 

	const matchSet = matchAgeToPerson(arrayOfPeople);
    console.log("Matching names:", matchSet);

	const returnValue = matchSet.filter(name => name !== 'Not a match!').toString();


console.log('Final Result:', returnValue);
return returnValue;
};

findTheOldest(people);
