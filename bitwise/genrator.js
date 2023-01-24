const fs = require('fs');

for(let i=0;i<15;i++)
{
    const index = "00" +i;
    const fileIndex= index.substring(index.length-2);    
    // constraints
    valueHigh = 10000;
    valueLow = 1;
    
    
    function getRandomIntInclusive(min, max) {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1) + min); // The maximum is inclusive and the minimum is inclusive
    }
    
    function getRandomValue() {
        return getRandomIntInclusive(valueLow, valueHigh);
    }
    let b=getRandomIntInclusive(1, valueHigh);
    let a=getRandomIntInclusive(1, valueHigh);
    
    let test_case = [a , b];
    
    // test_case = [test_case.length, ...test_case];
    
    fs.writeFileSync(`./input/input${fileIndex}.txt`, test_case.join(" "));
}