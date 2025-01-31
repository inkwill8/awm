// new paragraph

let container = document.querySelector('#container');

let para = document.createElement('p');
para.textContent = `Hey I'm red!`;
para.style.color = 'red';

container.appendChild(para);

// new h3

let heading = document.createElement('h3');

heading.textContent = `I'm a blue h3!`;
heading.style.color = 'blue';

container.appendChild(heading);

// new div

let div = document.createElement('div');
let headingOne = document.createElement('h1');
let paraTwo = document.createElement('p');

div.setAttribute('style', 'border: 1px solid black; background-color: pink');
headingOne.textContent = `I'm in a div`;
paraTwo.textContent = 'Me too!';

div.appendChild(headingOne);
div.appendChild(paraTwo);
container.appendChild(div);

// button

const btn = document.querySelector('#btn');
btn.addEventListener('click', function (e) {
    e.target.style.background = 'blue';
});

const btnTwo =  document.querySelector('#btn-2');
btnTwo.addEventListener('click', () => {
    alert('Hello World');
});