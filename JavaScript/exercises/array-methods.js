let avatar = [
	{name: 'Aang', bender: true, element: 'air'},
	{name: 'Katara', bender: true, element: 'water'},
	{name: 'Sokka', bender: false, element: undefined},
	{name: 'Zuko', bender: true, element: 'fire'},
	{name: 'Toph', bender: true, element: 'earth'},
	{name: 'Suki', bender: false, element: undefined}
];

//let char = avatar.find(item => item.bender == false);//
//let elem = avatar.find(item => item.element == 'fire')//;

//console.log(char.name);//
//console.log(elem.name);//

//let benders = avatar.filter(item => item.bender == true);//
//console.log(benders);//

let dune = 'Paul Atreides, Arrakis, Shai Hulud, crysknife';

//let duneMapped = dune.map(item => item.length);

//let duneReversed = duneMapped.reverse();

//let duneSorted = dune.sort();

let duneNames = dune.split(', ');

//console.log(dune);
//console.log(duneNames);

console.log(Array.isArray(avatar));

console.log(Array.isArray(dune));
