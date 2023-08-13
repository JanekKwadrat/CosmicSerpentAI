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