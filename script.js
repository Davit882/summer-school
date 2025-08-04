const fs = require('fs');


const evenData = JSON.parse(fs.readFileSync('even.json', 'utf8'));
const evenNumbers = evenData.numbers;


const oddData = JSON.parse(fs.readFileSync('odd.json', 'utf8'));
const oddNumbers = oddData.numbers;

if (evenNumbers.length !== oddNumbers.length) {
  console.error("Սխալ: Զանգվածների երկարությունները տարբեր են։");
  process.exit(1);
}


const sumArray = [];
for (let i = 0; i < evenNumbers.length; i++) {
  sumArray.push(evenNumbers[i] + oddNumbers[i]);
}


const result = { numbers: sumArray };
fs.writeFileSync('sum.json', JSON.stringify(result, null, 2), 'utf8');

console.log('Ֆայլը ստեղծվեց․ sum.json');
