const fs = require('fs');
const { default: test } = require('node:test');

for(let i=0;i<15;i++)
{
    const index = "00" +i;
    const fileIndex= index.substring(index.length-2);    
    // constraints
    let valueHigh,valueLow,nLow,nHigh,remain=100000,t;
    if(i<=5)
    {
        nHigh=10;
        nLow=1;
        valueHigh = 10;
        valueLow = 1;
        remain=20;
        t=getRandomIntInclusive(1,5);
    }
    else
    {
        nHigh=10000;    
        nLow=1;
        valueHigh = 1000;
        valueLow = 1;
        t=getRandomIntInclusive(1,100);
    }
    
    
    function getRandomIntInclusive(min, max) {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1) + min); // The maximum is inclusive and the minimum is inclusive
    }
    function getRandomValue() {
        return getRandomIntInclusive(valueLow, valueHigh);
    }
    let bbb = [];
    bbb.push(t);
    for(let i=0;i<t;i++)
    {
        let n= getRandomIntInclusive(1,remain-(t-i)+1);
        remain-=n;
        let k=getRandomIntInclusive(1,n-1);
        let f=getRandomIntInclusive(1,n-1);
        let test_case = [];
        for(let j=0;j<n;j++)
        {
            let temp=getRandomIntInclusive(valueLow,valueHigh);
            test_case.push(temp);
        }
        let tests = [n];
        tests.push(k);
        tests.push(f);
        tests=tests.join(" ");
        test_case=test_case.join(" ");
        let final = [tests,test_case];
        final=final.join("\n");
        bbb.push(final);
        // console.log(final);
    }
  
    // test_case = [test_case.length, ...test_case];
    
    fs.writeFileSync(`./input/input${fileIndex}.txt`, bbb.join("\n"));
}
