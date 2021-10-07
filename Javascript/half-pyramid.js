//set the value of n here for rows and s for symbol
var n = 5;
var s = '*'
generate(n,s);

function generate(n) {

    let level = ''; // will be reset each level loop

    for(var i = 0; i < n; i++) { // Looping through levels
        level = '';
        for(var j = 0; j < i+1; j++) {
          level += s;
        }
        console.log(level);
    }
}
