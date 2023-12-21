let toggle = false;
let tt = false;
let text;
$(document).ready(function(){
$("#btn").on("click", function(){
    toggle =! toggle;
    if(toggle){
        $("#btn").text("Following");
        window.confirm("You want to Follow Harshil Patel");
        $("#sidebar").css("display", "flex");
        $("#box").css("height", "752px");
        $("#line").css("display", "flex");
        $("#follow").css("display", "flex");

        let mypromise = new Promise((res,rej)=>{

            if(true){
                return res();
            }
            else{
                return rej();
            }
        })

            mypromise
            .then (function(){
                async function func(){
                    let got = await fetch(`https://randomuser.me/api/`);
                    let trance = await got.json();
                    text = JSON.stringify(trance);
                }
        
                let print = func();
        
                setTimeout(() => {
                    $("#json").text(print);
                  }, "3000");

            })
            .catch (function (){

                setTimeout(() => {
                    $("#json").text("fetching error!!");
                  }, "2000");
            })
            tt =! tt;
            if(tt){
                     $("#message").on("keydown", function(){
                        $("#json").append("1");
                     })
            }
            else{
                            $("#message").on("keyup", function(){
                                setTimeout(()=>{
                                    $("#json").append("0");
                                }, "2000")
                            })
            }

     

    }else{
        $("#btn").text("Follow");
        window.confirm("You want to UnFollow Harshil Patel");
        $("#sidebar").css("display", "none");
        $("#box").css("height", "300px");
        $("#line").css("display", "none");
        $("#follow").css("display", "none");
    }
});
});


