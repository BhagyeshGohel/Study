let input1;
let input2;
let input3;
let blank;
let numval; 
let nval; 
let passval;
let pval;

$(document).ready(function(){
    $(".btn").click(function func(){
        
        input1 = $(".inp1").val();
        input2 = $(".inp2").val();
        input3 = $(".inp3").val();
        blank = "";
        numval = $("#num").val();
        nval = numval.length;
        passval = $("#pass").val();
        pval = passval.length;
    
try{        
    if(input1 = blank) throw "all information compalsurry";
    if(input2 = blank) throw "all information compalsurry";
    if(input3 = blank) throw "all information compalsurry";
}
catch(error1){
    $("#mess").text(error1);
};

try{

    if(pval >= 16) throw "Fill password between 8 to 16.";
    if(pval <= 8) throw "Fill password between 8 to 16.";
}
catch(error2){
    $("#pa").text(error2);
};

try{
    if (nval != 10) throw "Please fill 10 digits.";
}
catch(error3){
    $("#tel").text(error3);
};

});
  });