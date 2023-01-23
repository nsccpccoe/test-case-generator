const fs = require('fs');

for(let i=0;i<=15;i++)
{
    const index = "00" +i;
    const fileIndex= index.substring(index.length-2);    
    // constraints
    let valueHigh,valueLow,nLow,nHigh;
    if(i<=5)
    {
        nHigh=10;
        nLow=1;
        valueHigh = 10;
        valueLow = 1;
    }
    else
    {
        nHigh=10000;
        nLow=1;
        valueHigh = 1000;
        valueLow = 1;
    }
    
    
    
    function getRandomIntInclusive(min, max) {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1) + min); // The maximum is inclusive and the minimum is inclusive
    }
    
    function getRandomValue() {
        return getRandomIntInclusive(nLow, nHigh);
    }

    let n=getRandomValue();
    let test_case = [];
    for(let j=0;j<n;j++)
    {
        let temp=getRandomIntInclusive(valueLow,valueHigh);
        test_case.push(temp);
    }
    let tests = [n];
    test_case=test_case.join(" ");
    let final = [tests,test_case];


    // let b=getRandomIntInclusive(1, valueHigh);
    // let a=getRandomIntInclusive(b/2, b);
    
    
    // test_case = [test_case.length, ...test_case];
    
    fs.writeFileSync(`./input/input${fileIndex}.txt`,final.join("\n"));
}
