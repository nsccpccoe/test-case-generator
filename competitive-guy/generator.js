const fs = require('fs')

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


function getRandomIntInclusive(min, max) {
  min = Math.ceil(min)
  max = Math.floor(max)
  return Math.floor(Math.random() * (max - min + 1) + min) // The maximum is inclusive and the minimum is inclusive
}


for (let i = 2; i <= 22; i++) {
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

 const T = getRandomIntInclusive(1, 100)


 let test_case = [String(T)]

 console.log(test_case)

 for (let t = 0; t < T; t++) {
  const N = getRandomIntInclusive(nLow, nHigh)
  const K = getRandomIntInclusive(valueLow, valueHigh)

  test_case.push([N, K].join(' '))

  const A = []
  for (let i = 0; i < N; i++) {
    const Ai = getRandomIntInclusive(0, K);
    A.push(Ai)
  }

  test_case.push(A.join(' '));

 }

 fs.writeFileSync(`./input/input${fileIndex}.txt`, test_case.join('\n'))

}
