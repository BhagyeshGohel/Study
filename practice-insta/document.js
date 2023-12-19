let toggle = false;
document.getElementById("btn").addEventListener("click", function(){
    toggle =! toggle;
    if(toggle){
        document.getElementById("btn").innerHTML = "Following";
        window.confirm("You want to Follow Harshil Patel");
        document.getElementById("sidebar").style.display = "flex";
        document.getElementById("box").style.height = "752px";
        document.getElementById("line").style.display = "flex";
        document.getElementById("follow").style.display = "flex"
    }else{
        document.getElementById("btn").innerHTML = "Follow";
        window.confirm("You want to UnFollow Harshil Patel");
        document.getElementById("sidebar").style.display = "none";
        document.getElementById("box").style.height = "300px";
        document.getElementById("line").style.display = "none";
        document.getElementById("follow").style.display = "none";
    }
})



