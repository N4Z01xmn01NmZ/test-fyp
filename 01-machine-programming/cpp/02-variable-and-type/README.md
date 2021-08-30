# Variable

A variable represent data on the machine.

```c++
int variable;
```

Before using a variable it needs to be declared by first typing the data type followed by its name. And there are naming rules:

- 1 - 255 characters long
- begin with a letter of the alphabet or `_`
- can contain letters and numbers
- case sensitive
- no space or special characters
- don't use C++ keywords

Value can then be assigned to a value or reassigned.

```c++
variable = 10;
```

When declaring and assigning variable on the same line it is called an initialization.

```c++
int variable = 10;
```

## Data Types

- `bool` stores `true` or `false`
- `char` stores a single character
- `int` stores interger value
- `float` stores real number value

```c++
bool boo = true;
char cha = 'A';
int num = 10;
float flo = 3.14f;
```

Data type in C++ is differentiated by its size and stored in interger standard except for floats which stored in [IEEE 754](https://en.wikipedia.org/wiki/IEEE_754) standard. This means both `bool` and `char` has interger value.

For more reading on [data types](https://en.cppreference.com/w/cpp/language/types).
