const button = document.getElementById("submit")

button.addEventListener("click", () =>{
    button.textContent = "Submitted";
    window.location.href = "mainpage.html"
});

