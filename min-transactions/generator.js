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

function getRandomString(len){
  const chars="qwertyuiopasdfghjklzxcvbnm"
  let resString=""
  for (let i = 0; i < len; i++) {
    resString+=chars[getRandomIntInclusive(0,chars.length-1)]
  }
  if(resString == "") console.error("ZERO!!!!!!!!!!!!!")
  return resString
}



for (let i = 2; i <= 22; i++) {
  const index = '00' + i
  const fileIndex = index.substring(index.length - 2)

  // constraints
  let valueHigh, valueLow, nLow, nHigh, T
  if (i <= 7) {
    nHigh = 10
    nLow = 1
    valueHigh = 150
    valueLow = 50
    T = getRandomIntInclusive(1, 5)
  }
  else if (i <= 12) {
    nHigh = 500
    nLow = 50
    valueHigh = 500
    valueLow = 50
    T = getRandomIntInclusive(80, 100)
  }
  else if (i <= 17) {
    nHigh = 5000
    nLow = 500
    valueHigh = 5000
    valueLow = 500
    T = getRandomIntInclusive(50, 100)
  }
  else if (i <= 21) {
    nHigh = 50000
    nLow = 5000
    valueHigh = 5000
    valueLow = 500
    T = getRandomIntInclusive(25, 75)
  } else {
    nHigh = 100000
    nLow = 100000
    valueHigh = 10000
    valueLow = 10000
    T = 10
  }


  let test_case = [String(T)]

  for (let t = 0; t < T; t++) {
    const N = getRandomIntInclusive(nLow, nHigh)
    const K = getRandomIntInclusive(valueLow, valueHigh)

    test_case.push([N, K].join(' '))

    const A = new Set()
    while(A.size < N) {
      const len = getRandomIntInclusive(3, 5);
      const str=getRandomString(len)
      A.add(str)
    }

    const nodes = Array.from(A)
    for(let i=0; i < K; ++i) {
      let first = getRandomIntInclusive(0, nodes.length-1)
      let second = getRandomIntInclusive(0, nodes.length-1)
      while(first == second) {
        second = getRandomIntInclusive(0, nodes.length-1)
      }
      let cash = getRandomIntInclusive(valueLow, valueHigh)

      test_case.push([nodes[first], nodes[second], cash].join(' '))
    }

    // test_case.push(A.join(' '));

  }

  fs.writeFileSync(`./input/input${fileIndex}.txt`, test_case.join('\n'))

}
