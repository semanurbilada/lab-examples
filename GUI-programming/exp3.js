/*
// Coding Challenge #4 - data given;
let bill = 275;
let tip;
let total;

bill >= 50 && bill <= 300 ? tip = bill * 0.15 : tip = bill * 0.2; 

total = bill + tip;
console.log("The bill was: " + bill + ".\n" + "The tip was: " + tip + ".\n" + "The total: " + total + "!!!");
*/

// Coding Challenge #5 - data not given
let tip;
let bill = prompt("Please enter the bill: ");

calcTip = () => {
    bill >= 50 && bill <= 300 ? tip = bill * 0.15 : tip = bill * 0.2; 
}