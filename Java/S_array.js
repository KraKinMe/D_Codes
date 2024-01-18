// let A=[10,20,30,40,50];

// A.forEach(function(item,index){
//     console.log(`index=${index} item=${item}`);
// })

// for(let i=0;i<A.length;i++){
//     console.log(`index=${i} item=${A[i]}`);
// }

// let B=A.map()

//Sort,Find,Reduce


function outer(){
    let a=100;
    function inner(){
        console.log(a);
    }
    inner();
}
outer();

//Whenever you return a function that function is never returned alone.
//It is returned with its lexical scope,with it so that

//Before the class syntax was used we had no way to privatize our variables or functions so,in that case we used closures so that we can privatize the variables

function counter(){
    let count=0;
    return{
        getCount : function(){
            console.log(count);
        },
        increment : function(){
            count++;
        }
    }
}