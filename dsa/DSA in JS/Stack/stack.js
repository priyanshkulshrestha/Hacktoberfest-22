class Stack{
    constructor(){
        this.items = [];
    }

    // constructor(size){
    //     this.items = [size]
    // }

    Stack(size){
        this.items = [size];
    }
    
    push(num) {
        this.items.push(num)
    }

    pop(){
        this.items.pop();
    }
}
const S = new Stack;

console.log(S);
S.push(5);
console.log(S);
S.push(10)
console.log(S);
S.pop();
console.log(S)

// const A[10] = new Stack;
