// Coding Challenge #3;

const Dolphins = [96, 108, 89];
const Koalas = [88, 91, 110];

avarageScore = (scores) => {
    sumOfScores = 0;
    scoreCount = scores.length;

    for(let i=0; i < scoreCount; i++) { sumOfScores += scores[i]; }
    return sumOfScores/scoreCount;
}

const dolphinsAvg = avarageScore(Dolphins);
const koalasAvg = avarageScore(Koalas);

console.log("Dolphins: " + dolphinsAvg);
console.log("Koalas: " + koalasAvg); 

if(dolphinsAvg > koalasAvg) { console.log("\nSo, the winner is Dolphins!"); }
else { console.log("\nSo, the winner is Dolphins!") }