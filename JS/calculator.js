const prompt = require("prompt-sync")()

const num1 = parseFloat(prompt("Enter the first number: "))
const num2 = parseFloat(prompt("Enter the second number: "))
const operator = prompt("Enter the operator or sign:  ")

let result;
let valid = true;
switch(operator){
    case "+":
        result = num1 + num2;
        break;
    case "-":
        result = num1 - num2;
        break;
    case "*":
        result = num1 * num2;
        break;
    case "/":
        result = num1 / num2;
        break;
    default:
        console.log("Invalid sign");
        valid = false;
        break;
}

if(valid)
 console.log(num1, operator, num2, "=", result)