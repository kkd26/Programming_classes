# Hello world

This is the very first program we created:
```cpp
#include <iostream> 

using namespace std; 

int main(){ 
    cout << "Hello World"; 
    // example of a one line comment
    /* a comment longer
       than one line */
    return 0; 
}
```

We explained the structure of our source code (human-readable code with extension .cpp):

- ```cpp 
    #include <iostream>
    ```
    This is called **including a header**, in our case this is input output library which enables us to use `cout` and `cin` methods

- ```cpp
    using namespace std;
    ```
    Use of a standard namespace - instead of `std::cout` we can write just `cout`

- ```cpp
    int main(){
        ...
        return 0;
    }
    ```
    The main function - any cpp program has to have one with exact same name - `main`. It returns an integer `int` which is equal to `0` when there is no errors

- ```cpp
    cout << "Hello World";
    ```
    Prints a text out to the console (**c**haracter **out**put = **cout**). After `cout` we have to use the insertion operator (`<<`) and then an object to be inserted - in this example this text is equal to **Hello World**. Remember that when we are printing text loger than one character we have to use double quotes `"..."`, when we are printing letters we can use signle quotes `'...'`

<br>

# Printing new lines and special characters

In order to print a new line we can use `endl`:
```cpp
    cout << "The first line";
    cout << endl;
    cout << "The second line";
```
We could've done everything in just one line:
```cpp
    cout << "The first line" << endl << "The second line";
```

The second approach, which is much faster and recommended, is to use an escape character `"\n"` inside text:
```cpp
    cout << "The first line\nThe second line";
```
There are also other escape characters like:
- `"\t"` which makes a tab
- `"\r"` which returns to the beginning of a line

If we want to print a special character like `\` or `"` we just need to use an additional backslash before it:
```cpp
    cout << "\\"; // this prints only one backslash: \ 
    cout << "\""; // this prints one double quote: "
```

| Escape code | Description |
| ----------- | ----------- |
| `\n` | newline |
| `\r` | carriage return |
| `\t` | tab |
| `\v` | vertical tab |
| `\b` | backspace |
| `\f` | form feed (page feed) |
| `\a` | alert (beep) |
| `\'` | single quote (') |
| `\"` | double quote (") |
| `\?` | question mark (?) |
| `\\` | backslash (\\) |


<br>

# Variables and types

Basic types:
- `string` - a string of characters, e.g. `"Example text"`
- `char` - one character, e.g. `'A'`, `'?'`, `' '`
- `int` or `long` - integer ranging from **-2147483648** to **2147483647**, e.g. `10`
- `long long int` or `long long` - integer ranging from **-2<sup>63</sup>** to **2<sup>64</sup> -1**
- `float` - floating point number; real number, e.g. `1.9`, `2.3333`
- `double` - two times bigger precision than `float` - recommended to use
- `bool` - boolean type of logic, can store `true` or `false`

## Declaring variables

In order to declare a varaible put their type and name:
```cpp
int name_of_a_variable;

double a, b, c; // three variables at the same time

string name = "Krzys"; // initialising variables at the time of declatarion
```

<br>

# Input from a user

Always we have to first declare a variable before we first use it.
```cpp
int n;
```
Then we can use an input stream `std::cin` (**st**andar**d** **c**haracter **in**put):
```cpp
cin >> n;
```
After that the console will wait for a user to input an integer in this case (`n` is declared as an `int`) and store it in the variable `n`. We can output the result using:
```cpp
cout << n;
```