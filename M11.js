// Default parameters

function greet(name = "Anonymous", age = 18) {
  console.log(`Hello ${name}! You are ${age} years old.`);
}

greet(); // Hello Anonymous! You are 18 years old.
greet("John", 25); // Hello John! You are 25 years old.
greet("Sarah"); // Hello Sarah! You are 18 years old.

// Rest Operator

function sum(...numbers) {
  let total = 0;
  for (let number of numbers) {
    total += number;
  }
  return total;
}

console.log(sum(1, 2, 3)); // Output: 6
console.log(sum(4, 5, 6, 7)); // Output: 22
console.log(sum(10)); // Output: 10
console.log(sum()); // Output: 0

// Spread Operator

const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];

const combinedArray = [...arr1, ...arr2];

console.log(combinedArray); // Output: [1, 2, 3, 4, 5, 6]

// ----------------
const numbers = [1, 2, 3, 4, 5];
const sum = (a, b, c, d, e) => a + b + c + d + e;

console.log(sum(...numbers)); // Output: 15

// Arguments Object
const numbers = [1, 2, 3, 4, 5];
const sum = (a, b, c, d, e) => a + b + c + d + e;

console.log(sum(...numbers)); // Output: 15

// Computer Properties

const propertyName = "color";

const house = {
  rooms: 3,
  [propertyName]: "blue",
  [`${propertyName}ful`]: true,
};

console.log(house.rooms); // Output: 3
console.log(house.color); // Output: 'blue'
console.log(house.colorful); // Output: true

// Destructuring arrays

const numbers = [1, 2, 3, 4, 5];

const [first, second, ...rest] = numbers;

console.log(first); // Output: 1
console.log(second); // Output: 2
console.log(rest); // Output: [3, 4, 5]

// Object destructuring
const person = {
  name: "John Doe",
  age: 30,
  city: "New York",
};

const { name, age, city } = person;

console.log(name); // Output: 'John Doe'
console.log(age); // Output: 30
console.log(city); // Output: 'New York'

// THIS Keyword
const person = {
  name: "John",
  age: 30,
  greet: function () {
    console.log(
      `Hello, my name is ${this.name} and I am ${this.age} years old.`
    );
  },
};

person.greet(); // Output: Hello, my name is John and I am 30 years old.
