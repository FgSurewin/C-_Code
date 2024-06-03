# Chapter 5: Loops and Files

## 1. `while` loop

```cpp
int num = 0;
while(num < 5) {
	cout << num << endl;
}
```

### 1.1 Validation

```cpp
// Write the input validation function that ensure the input value falls into
// the range [10, 100]

void validation(int &num) {
	while(num < 10 || num > 100) {
		cout << "Please enter an integer between 10 to 100: ";
		cin >> num;
	}
}
```

## 2. The `for` loop

```cpp
// Calculate the summation of the first n elements

#include <iosteam>
using namespace std;

int main() {
	int num;
	cout << "Please enter an positive integer: ";
	cin >> num;

	int sum = 0;
	for(int i = 0; i <= n; i++) {
		sum += i;
	}
	
	cout << "The sum is " <<  sum << endl;
}
```

## 3. The `do-while` loop

```cpp
int num;
do{
	cout << "Please enter an integer between 10 to 100: ";
	cin >> num;
}while(num < 10 || num > 100));
```

## Prefix and postfix

- Prefix:
    - First, we will conduct the increment.
    - Then, the assignment will be conducted.
- Postfix:
    - First, we will conduct the assignment, where we output the value.
    - Then, we conduct the increment.

```cpp
int num = 10;
// For this statement, it is postfix. 
// The num will fisrt do the assignment where output the value to cout.
// Then, it will conduct the increment. So num becomes 11.
cout << num++ << endl; // 10
// For this statement, it is prefix.
// Since the num is 11, it will become 12 when we do the increment.
// Then, it output to cout. 
cout << ++num << endl; // 12
// For this statement, it is postfix.
// So it is still showing 12.
cout << num++ << endl; // 12
```

## File System

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Init the input file variable.
  ifstream inputFile;
  ofstream outputFile;
  int num;
  
  // Open the file
  inputFile.open("test.txt");
  outputFile.open("output.txt");
  
  // Validation
  if(inputFile) {
    while(inputFile >> num) {
      cout << num << endl;
      outputFile << num * 2;
      outputFile << "\n";
    }
  }else {
    cout << "Error for opening the file!";
  }

  // Close
  inputFile.close();
  outputFile.close();
  
}
```

# Chapter 6: Functions

## Function definition

- Function prototype:
    - Return type.
    - Only write the datatype for parameters.
    - Don’t forget about the `;` at the end.
- Full function:
    - Function header: you need to provide the parameter names in the function header.
    - **Note:** parameter names can be different than the variable names in the main functions. For the function, the parameter names are the placeholders which you will use them to implement the requested logic.

```cpp
#include <iostream>
using namespace std;

bool largerThan(int, int);

int main() {
	int num1 = 10;
	int num2 = 20;
	
	if(largerThan(num1, num2)) {
		cout << "num1 is larger." << endl;
	}else {
		cout << "num2 is larger." << endl;
	}
}

bool largerThan(int m, int n) {
	if(m > n) {
		return true;
	}else {
		return false;
	}
}
```

## Passing by Value or Reference

- **Passing by value:** when using passing by value, the modification of the parameter variables **will not** influence the original variable, e.g. the passing arguments.
- **Passing by reference (using `&`):** when using passing by reference, the modification of the parameter variables **does influence** the original variable.