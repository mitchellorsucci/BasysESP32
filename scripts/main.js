// var myHeading = document.querySelector('h1');
// myHeading.textContent = 'Hello world!';
var button = document.createElement("button");
button.innerHTML = "Toggle LED";

var body = document.querySelector('h1');
body.appendChild(button);

button.addEventListener("click", function() {
	alert("Button Pressed")
});
