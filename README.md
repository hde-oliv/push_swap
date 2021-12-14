# Push Swap

## What it is
This project consists on a binary called push_swap that sorts a passed array of numbers (without duplicates and of 32 bits) using only  
a limited set of instructions and an auxiliary stack.

Succeeded with 84%

## Skills
- Rigor
- Unix
- Imperative programming
- Algorithms & AI

## Instructions utilized
- sa: swap the two numbers on the top of stack a
- pa: push the top number of stack b to stack a
- pb: push the top number of stack a to stack b
- ra: rotate stack a one time (the first element becomes the last one)
- rra: reverse rotate stack a one time (the last element becomes the first one)

## Performance
- With 3 numbers: 2 instructions
- With 5 numbers: 7-10 instructions
- With 100 numbers: 1084 instructions
- With 500 numbers: 6784 instructions

## How to use it
Requisites:
```shell
clang
```

Clone the repository and run:
```shell
make
```

After, provide a list of numbers to sort:
``` shell
./push_swap `ruby -e "puts (0..499).to_a.shuffle.join(' ')"`
```

All instructions utilized will be printed on stdout.

## Found any bug?
Feel free to contact me or create an issue!

###### Licensed under GPLv3
