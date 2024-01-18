const sym1 = Symbol('apple');

const JsUser={
    name: "Dhruv",
    age: 20,
    isMarried: false,
    [sym1]: "This is a symbol"
}

// console.log(JsUser.name);
// console.log(JsUser["age"]);
// console.log(JsUser[sym1]);

JsUser.greeting=function(){
    console.log(`Hello ${this.name}!`);
}

JsUser.greeting();
JsUser.loc="Delhi";
console.log(JsUser);