# test-case-generator

## Getting Started 

Check This [Issue]() to Track Progress

## How to get started   

> Go to the  **template** folder

We fill found following files 
---
- [x] program.cpp > Here your main program resides the main logic/solution of the problem

- [x] generator.js
- Here you have to write the code for genrating the random test cases 
                You can set diff constraints and vary each test cases accordingly
- It will form the input file where all the test cases resides

```bash
node generator.js
```

- [x] driver.cpp  - Here you take the program.cpp and all the test cases from input file and
              it generates the ouput file
```bash
g++ driver.cpp -o  temp && ./temp/
```

Clone the repo 
```bash
git clone https://github.com/nsccpccoe/test-case-generator.git 
```


## Thanks to all the contributors ❤️
<a href = "https://github.com/nsccpccoe/test-case-generator/graphs/contributors">
  <img src = "https://contrib.rocks/image?repo=nsccpccoe/test-case-generator"/>
</a>
