function my_average_mark(test) {
    let integerSum = 0;
    let itemsFound = 0;
    const len = test.length;
    let item = null;
    for (let i = 0; i < len; i++) {
        item = test[i];
        integerSum = item.integer + integerSum;
        itemsFound++;  
    }
    let Sum =  integerSum / itemsFound;
    return  Sum.toFixed(1)
    };
my_average_mark([])
