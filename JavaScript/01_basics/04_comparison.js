console.log(1 == 1); // true

console.log("2">3); // false

console.log(1 == "1"); // true

console.log(null==0) // false (null is not converted to 0)
console.log(null >=0); // true (null is converted to 0)

console.log(undefined == 0); // false (undefined is not converted to 0)
console.log(undefined >= 0); // false (undefined is not converted to 0)


//////////////////////////
//Strict equality operator

console.log(1 == "1"); // true
console.log(1 === "1"); // false as it checks the type as well

console.log(null == undefined); // true
console.log(null === undefined); // false

let big = 1234567890123456789012345678901234567890n;

console.log(typeof big); // bigint

//////////////////////////////////////////////////////////////

let a=5
let b=a
b=10
console.log(a) // 5
console.log(b) // 10
// a and b are independent
//but if we have an object

let c={
    name:"John",
    age:30
}

let d=c
console.log(c) // { name: 'John', age: 30 }

d.age=40
// Reference to the same object
console.log(c)

//Here we are not copying the object, but copying the reference to the same object
