# Push Swap

## What is it?
This project involves sorting data on a [stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)), with a limited set of instructions, and the smallest number of moves.  
To make this happen, some variations of common sorting algorithms are applied.

### The 42 problem statement
You have 2 stacks named A and B.
####  At the beginning:
-  The stack A contains a random amount of negative and/or positive numbers
which cannot be duplicated.
-  The stack B is empty.
-  The goal is to sort the numbers in ascending order into stack A.
####  Permitted Operations:
- **sa (swap a):** Swap the first 2 elements at the top of stack A. Do nothing if there are only one or no elements.  

- **sb (swap b):** Swap the first 2 elements at the top of stack B. Do nothing if there are only one or no elements.  

- **ss:** sa and sb at the same time.  

- **pa (push a):** Take the first element at the top of B and put it at the top of A. Do nothing if b is empty.  

- **pb (push b):** Take the first element at the top of a and put it at the top of A. Do nothing if A is empty.  

- **ra (rotate a):** Shift up all elements of stack A by 1. The first element becomes the last one.  

- **rb (rotate b):** Shift up all elements of stack B by 1. The first element becomes the last one.  

- **rr:** ra and rb at the same time.  

- **rra (reverse rotate a):** Shift down all elements of stack A by 1. The last element becomes the first one.  

- **rrb (reverse rotate b):** Shift down all elements of stack B by 1. The last element becomes the first one.  

- **rrr:** rra and rrb at the same time  
  
**Succeeded with 84%**

## Skills
- Rigor
- Unix
- Imperative programming
- Algorithms & AI

## Performance
The sort algorithm used was [Radix Sort](https://en.wikipedia.org/wiki/Radix_sort).

- With 3 numbers: 2 instructions
- With 5 numbers: 7–10 instructions
- With 100 numbers: 1084 instructions
- With 500 numbers: 6784 instructions

## How to use it
Requirements:
```shell
sudo apt install clang
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

## Found any bugs?
Feel free to contact me or create an issue!

## License
This project is licensed under the GNU General Public License v3.0 - see the [COPYING](https://github.com/hde-oliv/push_swap/blob/master/COPYING) file for details.
