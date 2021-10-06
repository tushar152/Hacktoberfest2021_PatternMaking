 
//set the value of n here for rows and s for symbol
var n = 5;
var s = '*'
generate(n,s);

function generate(n) {
    var width = (2 * n) -1; // Always the case.
    var midpoint = Math.floor(width / 2); // Middle of pyramid.
    let level = ''; // will be reset each level loop

    for(var i = 0; i < n; i++) { // Looping through levels
        level = '';
        for(var j = 0; j < width; j++) {
            if(j < midpoint-i || j > midpoint+i) {
                level += ' ';
            } else {
                level += s;
            }
        }
        console.log(level);
    }
}
