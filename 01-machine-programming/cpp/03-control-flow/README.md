# Control Flow

## Branch

Branching occur when decision block creates different outcomes depending on the input.

The `if` statement specifies a block of code to be excecuted when the condition is true.

```c++
if (/* condition */) {
        /* code */
    }
```

The statement can be paired with `else` statement that specifies a block of code to be executed when the previous condition is false.

```c++
if (/* condition */) {
        /* code */
    }
else {
        /* code */
    }
```

The `else if` statement specifies a new condition when the previous condition is false.

## While Loop

The `while` loop will run a block of code when the condition is true.

```c++
while (/* condition */) {
        /* code */
    }
```

## For Loop

Used to iterate over a range of value. The `for` loop uses three statement:

```c++
for (size_t i = 0; i < count; i++) {
        /* code */
    }
```

- The first statement used initialize a variable.
- The second statement is the loop condition, this statement decide whether to run the code block or to end the loop.
- The third statement will be executed at the end of every iteration.
