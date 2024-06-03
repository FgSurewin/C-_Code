# Chapter 2: Introduction to C++

## Overview of first C++ program

```cpp
#include <iostream>
using namespace std;

int main() {
	cout << "Hello world!";
	
	return 0; // Optional statement
}
```

## The `cout`  object

It is used to display the output on the computer screen. 

```cpp
cout << "Programming is fun!";

// Can be used to send more than one item
cout << "Hello " << "there!";
```

## Newline:

- You can use the `endl` manipulator to start a new line of output. This will produce two lines of output:
- You can also use `"\n"` to start a new line

```cpp
cout << "Programming is" << endl;
cout << "fun!";

// OR
cout << "Programming is \n fun!";
```

## **The `#include` Directive**

1. Inserts the contents of another file into the program.
2. This is a preprocessor directive, not part of C++ language.
3. Do not place a semicolon at end of `#include` line

## **Variables and Literals**

1. **Variable: a storage location in memory**
- Has a name and a type of data it can hold.
- Must be defined before it can be used.

```cpp
// Case 1:
int item;
item = 15;

// Case 2:
int item = 15;
```

1. **Literal: a value that is written into a program’s code.**
2. **Identifier Rules**

> **An identifier is a programmer-defined name for some part of a program: variables, functions, etc.**
> 
- The first character of an identifier must be an alphabetic character or and underscore ( _ ),
- After the first character you may use alphabetic characters, numbers, or underscore characters.
- Upper- and lowercase characters are distinct


## Datatypes

- **Determining the Size of a Data Type**

```cpp
double amount;
cout << "A double is stored in "
  	<< sizeof(double) << "bytes\n";
```

- **Variable Initialization**

```cpp
int num = 5;
float f = 5.5;
double d = 10.6;
bool b = true;
char c = 'c';
```

## String in C++

```cpp
#include <string>
#include <iostream>
using namespace std;

int main() {
	string firstName, lastName;
	firstName = "George";
	lastName = "Washington";

	cout << firstName << " " << lastName;
}
```

# Chapter 3: Expressions and Interactivity

## The `cin` Object

- Standard input object: it is used to obtain the user input.

```cpp
// Always define a variable first to store the user input. 
int num;
cin >> num;

// Can be used to input more than one value:
// Use white space to seperate them.
cin >> height >> width;

```

## Mathematical expressions

- An expression can be a literal, a variable, or a mathematical combination of constants and variables.
- Order does matter.
- parentheses ( ) can be used to override the order of operations.

## Datatype Conversion

**Note:**

- **Operations are performed between operands of the same type.**
- **If not of the same type, C++ will convert one to be the type of the other.**
- **This can impact the results of calculations.**

### Type Coercion

- **Type Coercion: automatic conversion of an operand to another data type.**
- **Promotion: convert to a higher type**
- **Demotion: convert to a lower type**

### Coercion Rules

1. `char` automatically promoted to `int` .
2. **When operating on values of different data types, the lower one is promoted to the type of the higher one.**
3. **When using the = operator, the type of expression on right will be converted to type of variable on left.**
4. Hierarchy of Types: `double` > `float` > `int`

### Type Casting

```cpp
double m;
m = static_cast<double>(y2-y1)/(x2-x1);

// Useful to see int value of a char variable:
char ch = 'C';
cout << ch << " is " 
       << static_cast<int>(ch);

```

## **Combined Assignment**

```cpp
sum = sum + 1;
sum += 1;
sum++;
```
# Chapter 4: Making Decisions

## Syntax

Basic `if-else` structure

```cpp
#include <iostream>
using namespace std;

int main() {
	int num;
	int result;
	cin >> num;
	
	if(num > 10){
		result = num;
	}else {
		result = 8;
	}
	
	return 0; // Optional statement
}
```

Nested  `if-else` structure

```cpp
#include <iostream>
using namespace std;

int main() {
	int num;
	int result;
	cin >> num;
	
	if(num > 10){
		if(num > 25) {
			result = num;
		}else {
			result = 18;
		}
	}else {
		result = 8;
	}
	
	return 0; // Optional statement
}
```

The `if-else if` structure

```cpp
#include <iostream>
using namespace std;

int main() {
  // 1. Init the variables
  double num1;
  double num2;
  char operation;
  char again;

  // 2. Ask for the two inputs.
  cout << "Please enter the first number: ";
  cin >> num1;
  cout << "Please enter the second number: ";
  cin >> num2;
  cout << "Please enter the operation: ";
  cin >> operation;

  // 3. If-else if statements
  if (operation == 'A') {
    cout << "The result is " << num1 + num2;
  } else if (operation == 'S') {
    cout << "The result is " << num1 - num2;
  } else if (operation == 'M') {
    cout << "The result is " << num1 * num2;
  } else if (operation == 'D') {
    cout << "The result is " << num1 / num2;
  }

  cout << endl << "Goodbye!";
}
```

## Logical operators