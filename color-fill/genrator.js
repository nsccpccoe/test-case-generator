const fs = require('fs');
const { get } = require('http');
const { stringify } = require('querystring');

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
    let q=getRandomValue();
    let test_case = [];
    let queries = [];
    for(let j=0;j<n;j++)
    {
        let temp=getRandomIntInclusive(0,n-1);
        test_case.push(temp);
    }

    for(let j=0;j<q;j++)
    {
        let index=getRandomIntInclusive(0,n-1);
        let color=getRandomIntInclusive(valueLow,n-1);
        let qu = [];
        qu.push(String(index));
        qu.push(String(color));
        qu = qu.join(" ");
        queries.push(qu);
    }
    let tests = [String(n) + " " + String(q)];
    test_case = test_case.join(" ");
    queries = queries.join("\n");
    let final = [tests,test_case,queries];
    
    fs.writeFileSync(`./input/input${fileIndex}.txt`,final.join("\n"));
}