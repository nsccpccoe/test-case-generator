const fs = require('fs')


for (let i = 0; i <= 20; i++) {
 const index = '00' + i
 const fileIndex = index.substring(index.length - 2)
 // constraints
 let valueHigh, valueLow, nLow, nHigh
 if (i <= 5) {
   nHigh = 10
   nLow = 1
   valueHigh = 150
   valueLow = 50
 } else {
   nHigh = 100
   nLow = 50
   valueHigh = 200
   valueLow = 10
 }
 function getRandomIntInclusive(min, max) {
   min = Math.ceil(min)
   max = Math.floor(max)
   return Math.floor(Math.random() * (max - min + 1) + min) // The maximum is inclusive and the minimum is inclusive
 }


 function getRandomValue() {
   return getRandomIntInclusive(nLow, nHigh)
 }


 let n = getRandomValue()
 let test_case = []
 let temp_100 = getRandomIntInclusive(1,n-1);
 for(let i = 0 ; i <temp_100 ; i ++)
 {
   test_case.push(100);
 }


 for (let j = 0; j < n - temp_100 ; j++) {
   let temp = getRandomIntInclusive(valueLow, valueHigh)
   test_case.push(temp)
 }




 function shuffle(array) {
   const newArray = [...array]
   const length = newArray.length
    for (let start = 0; start < length; start++) {
     const randomPosition = Math.floor((newArray.length - start) * Math.random())
     const randomItem = newArray.splice(randomPosition, 1)
      newArray.push(...randomItem)
   }
    return newArray
 }


 let temp1 = shuffle(test_case);
 test_case = temp1;




  let tests = [n]
 test_case = test_case.join(' ')
 let final = [tests, test_case]


 // let b=getRandomIntInclusive(1, valueHigh);
 // let a=getRandomIntInclusive(b/2, b);


 // test_case = [test_case.length, ...test_case];
  
 fs.writeFileSync(`./input/input${fileIndex}.txt`, final.join('\n'))

}
