# CosmicSerpentAI
 CosmicSerpentAI is an attempt to create algorithm able to play the game of snake. It's written in TypeScript and Rust thanks to WebAssembly.


## Snake game rules
- Snake is played on a rectangular board m x n where 4 <= m, n <= 100.
- The snake moves one square at a time.
- Bumping into the walls or tail is illegal.
- The player decides where snakes head is going to turn (slight help or adjustments are ok for human players).
- The game starts with the snake being four squares long heading any of the four directions with its head somewhere on the board.
- Every time an apple is consumed snake grows by one unit of length.
- An apple's position is known to the player as soon as they eat the previous apple.
- An apple's position doesn't change.
- The game has to finish in at most (m x n) ^ 2 turns, if not, it's lost.
- There may be time limit to decide on a move each turn.

## Agent 



## To do
- Define what the game Snake is.
- Write example AI agent in C.
- Create bare minimum script allowing one agent to be tested.
- Bring the AI agent to work with the testing script.
- Write one or two more agents.
- Work on the UI.

## Rules of the game Snake
Snake is a one-player game played on a rectangular board. The board dimensions are integers between 4 and 100. The board contains a number of squares.

A snake is present on the board at any time during the game. The snake can be defined as a sequence of squares it occupies (the snake's sequence). The squares in the snake's sequence are distinct. Any two consecutive squares in the snake's sequence are adjacent. The length of the snake's sequence is called the snake's length. The first square in the snake's sequence is called the snake's head. The rest of the squares in the snake's sequence are called the snake's tail.

The player controls the snake. Every turn, they try to move the snake in one of the four directions of their choosing. If the chosen direction is illegal
