export type Dir = 'n' | 'e' | 's' | 'w'
export type Pair = [number, number]

export interface GenericSnake {
    name: string;
    reset(board_size: Pair, snake_pos: Pair, snake_dir: Dir): void;
    apple(apple_pos: Pair): void;
    query(): Dir;
}
