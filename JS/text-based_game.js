let prompt = require("prompt-sync")()
const nameOfTheUser = prompt("What is your name? ")
console.log("Hello", nameOfTheUser.toUpperCase(),"welcome to the Game!");

const wannaPlay = prompt("Do you want to play? ")

if (wannaPlay.toLowerCase() === "yes") {
//    Game logic begins here

    const directionToGo = prompt("Hey, you entered in a building, you have two choices.Either Go left or right. Where will you go? ");
    if (directionToGo.toLowerCase() === "left"){
        console.log("You went left")
        const againDirections = prompt("Keep going, now there is a pole, do you want to climb it? ")
        if (againDirections === "no" || againDirections === "n") {
            console.log("You chose, not to climb")
            const directions = prompt("Now, either go straight or stay here? ")
            if (directions.toLowerCase() === "straight"){
                console.log("Congratulations... you win!");
            } else {
                console.log("Sorry to hear that, but you lost...")
            }
        } else{
            console.log("Sadly, you lost, the pole was weak and it felt\nAs soon as you tried to climb");
            
        }
    } else if (directionToGo.toLowerCase() === "right") {
        console.log("You went right and there was a big tubewell...")
    }
    else {
        console.log("Provide correct input...")
    }
    
} else if (wannaPlay.toLowerCase() === "no") {
    console.log("Sorry to hear that :(");
} else {
    console.log("Invalid input given ...");  
}

