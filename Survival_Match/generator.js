const fs = require('fs');

num = "20";
for(let num=0;num<=20;num++)
{
    
    // constraints
    valueHigh = 10000;
    valueLow = 1;
    blocksHigh = 100000;
    linesHigh = 1000000;
    
    const char = "qwertyuiopasdfghjklzxcvbnm".split("");
    
    const tasks = [
        "CREATE_BLOCK",
        "CLOSE_BLOCK",
        "ADD_VAR",
        "PRINT_VAR",
    ]
    // for(let i=0;i<20;i++){
    //     getRandomIntInclusive(1,1000);
    // }

    function getRandomIntInclusive(min, max) {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1) + min); // The maximum is inclusive and the minimum is inclusive
    }
    
    // function getRandomVar() {
        //     return char[getRandomIntInclusive(0, char.length - 1)];
        // }
        
        // function getRandomValue() {
        //     return getRandomIntInclusive(valueLow, valueHigh);
        // }
        
        // function getRandomTask() {
        //     return tasks[getRandomIntInclusive(0, tasks.length - 1)];
        // }
        let b=getRandomIntInclusive(1, valueHigh);

        let a=getRandomIntInclusive(1, valueHigh);

        let c=getRandomIntInclusive(1, valueHigh);

        let d=getRandomIntInclusive(1, valueHigh);
        
        let test_case = [ a , b];
        // let openBlocks = 0;
        // let totalBlocks = 0;
        fs.writerFileSync('./input/input${fileIndex}.txt',test_case.join(" "));
        
        
        
        // while(totalBlocks < blocksHigh && test_case.length < linesHigh - openBlocks) {
            //     count++;
            //     if(count % 100000 == 0) console.log("Run: ", count++);
            // const task = getRandomTask();
    // switch (task) {
    //     case "CREATE_BLOCK":
    //         if(totalBlocks < blocksHigh && test_case.length < linesHigh - openBlocks - 1) {
        //             test_case.push("{");
        //             openBlocks++
        //             totalBlocks++;
        //         }
        //         break;
        //     case "CLOSE_BLOCK":
        //         if(openBlocks > 0) {
            //             test_case.push("}");
            //             openBlocks--;
            //         }
            //         break;
            //     case "ADD_VAR":
            //         test_case.push(getRandomVar() + " = " + getRandomValue());
            //         break;
            //     case "PRINT_VAR":
            //         test_case.push("print " + getRandomVar());
            //         break;
            //     }
            // }
            
            // while (openBlocks > 0) {
                //     test_case.push("}");
                //     openBlocks--;
                // }
                test_case.push(getRandomValue() + " " + getRandomValue());
                
                // test_case = [test_case.length, ...test_case];
                
                fs.writeFileSync(`./input${num}.txt`, "jhb hbub");
                
                console.assert(openBlocks == 0);
}
