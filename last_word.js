var last_word= function(str) {
  if (str.trim() === ""){
    let a = "";
    return a;
  } else {   
    var splitStr = str.split(/[\s,]+/);
    splitStr = splitStr.filter(lengthFilter);
    return splitStr[splitStr.length - 1];
  }
};

var lengthFilter = function(str){
    return str.length >= 1;
};
