const facto = (num) => {
    let factorial = i = 1;
    while(i<=num){
        factorial *= i;
        // console.log(factorial);
        i++;
    }
    return factorial;
}

console.log(facto(5))         