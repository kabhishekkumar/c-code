alert("sucess")
var timer; // Timer variable
var isRunning = false;
var milliseconds = 0, seconds = 0, minutes = 0;

function startStop() {
  if (!isRunning) {
    isRunning = true;
    document.getElementById("startStop").textContent = "Stop";
    timer = setInterval(updateTime, 10);
  } else {
    isRunning = false;
    document.getElementById("startStop").textContent = "Start";
    clearInterval(timer);
  }
}

function updateTime() {
  milliseconds += 10;
  if (milliseconds === 1000) {
    milliseconds = 0;
    seconds++;
    if (seconds === 60) {
      seconds = 0;
      minutes++;
    }
  }
  var display = (minutes < 10 ? "0" + minutes : minutes) + ":" +
                (seconds < 10 ? "0" + seconds : seconds) + ":" +
                (milliseconds < 100 ? (milliseconds < 10 ? "00" + milliseconds : "0" + milliseconds) : milliseconds);
  document.getElementById("display").textContent = display;
}

function reset() {
  clearInterval(timer);
  milliseconds = 0;
  seconds = 0;
  minutes = 0;
  document.getElementById("display").textContent = "00:00:00";
  document.getElementById("startStop").textContent = "Start";
  isRunning = false;
}
