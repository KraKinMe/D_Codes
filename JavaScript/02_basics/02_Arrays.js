let A=["Thor","IronMan","Hulk"];
let B=["BatMan","Flash","SuperMan"];
// A.push(B);
// console.log(A);


// let C=A.concat(B);
// console.log(C);

let D=[...A,...B];
console.log(D);

let E=[1,2,3,[4,5],[6,[7,8]]];
let F=E.flat(Infinity);
console.log(F);

