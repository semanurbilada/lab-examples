// Coding Challenge #1 + #2;

//data1 
const markWeight = 78;
const markHeight = 1.69;
const johnWeigth = 92;
const johnHeight = 1.95;
/*
//data2
const markWeight = 95;
const markHeight = 1.88;
const johnWeigth = 85;
const johnHeight = 1.76;
*/
const markBMI = markWeight / (markHeight * markHeight);
const johnBMI = johnWeigth / (johnHeight * johnHeight);

const markHigherBMI = markBMI > johnBMI;
const johnHigherBMI = johnBMI > markBMI;

console.log("Mark's BMI = " + markBMI);
console.log("John's BMI = " + johnBMI);

console.log("\nAccording to data1 :\nMark's BMI higher than John's BMI = " + markHigherBMI + "\n");
/*
console.log("\nAccording to data2 :\nJohn's BMI higher than Mark's BMI = " + markHigherBMI + "\n"); 
*/


// Challenge #2;
if(markBMI > johnBMI) {
    console.log(`Mark's BMI: ${markBMI} higher than John's: ${johnBMI}`);
}
else if(markBMI == johnBMI) {
    console.log("They are equal!"); 
}

else { console.log("John's BMI is higher than Mark's!"); }