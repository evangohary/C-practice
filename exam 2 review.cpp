// exam 2 review


//1.	Given the following array definition:
//		int values[5] = {4, 7, 6, 8, 2};
//		What does the following statement display?
//		Cout << values [4] << “ “ << (values[2] + values[3]) 
//		<< “ “ << ++values [1] << end;
//
//		2  14  8

//2.	Given the following array definition:
//		int numbers[5] = {1, 2, 3};
//	a.	What value is stored in numbers [2]?  3
//	b.	What value is stored in numbers [4]?  0

//3.	Assume that array1 and array2 are both 25 element integer arrays.  
//		Indicate whether each of the following statements is legal or illegal and explain why:
//a.	array1 = array2;  all are illegal must operate on individual elements
//b.	cout << array1;
//c.	cin >> array2;

//4.	Look at the following array definition:
//		double sales [8][10];
//a.	How many rows does the array have? 8
//b.	How many columns does the array have? 10
//c.	How many elements does the array have? 80
//d.	Write a statement that stores 3.52 in the last column of the last row in the array.
//		sales [7] [9] = 3.52;

//5.	Write value returning function that receives the above sales array 
//		and using nested loops, returns the sum of all the elements in the array. 

//		double fun1(double sales[][]){
//		For (int i = 0; i < 8; i++) 
//			double total = 0;
//			for (int i = 0; i < 8; i++){
//				for(int j = 0; j < 10; j++){
//					total += sales[i][j];
//					return total;
//			}
//		}
//	}

	

//6.	Write a declaration for an array called names to hold 20 string elements.  
//		Using a loop, initialize all the elements to the name “Sirius Black”.
//		string names[20];    
//   	for (int i=0; i < 20; i++)
//   		names[i] = "Sirius Black";

//7.	The arrays array1 and array2 each hold 25 integer elements.  
//		Write code that copies the values in array1 to array2.
//   int array1[20], array2[20];
//   for (int i=0; i < 20; i++)
//   	array1[i] = array2[i];

//8.	In a program you need to store the identification numbers of 10 employees 
//	(as ints) and their weekly gross pay (as doubles).

//a.	Define two arrays that may be used in parallel to store the 
//		10 employee identification numbers and 10 weekly gross pay amounts
//b.	Write  a loop that uses these arrays to print each employee’s 
//		identification number and weekly gross pay.

//	int emp_ID[10];
//	double emp_pay[10];
//	for (int i=0; i < 10; i++)
//   	  {
//   		cout << "Employee ID: "<<emp_ID[i] << endl;
//   		cout << "Gross Pay:  " <<emp_pay[i] << endl;
//   	  }

//9.	Rewrite the code for Problem 6 to define and use an array
// 		of Payroll structures instead of two parallel arrays.  A Payroll structure 
//		should hold an employee ID and weekly gross pay amount.

//struct Payroll
//   	{
//    		int emp_ID;
//		double emp_pay;
//    	};
//	
//	Payroll employee [10];
//   	for (int i=0; i < 10; i++)
//   	{
//   		cout << "Employee ID: "<<employee[i].emp_ID << endl;
//   		cout << "Gross Pay:  " <<employee[i].emp_pay << endl;
//   	}

//10. Write a function that accepts the Payroll structure below and 
//	  size as parameters, calculates total pay for all employees and returns the total.
//	class Rectangle {
//	private:
//	int length, width;
//	public:
//	Rectangle(){
//	length = 0; width = 0;}
//	void setLength(int l){
//	length = l;}
//	void setWidth (int w)
//	{width = w;}
//	};

//	Rectangle r1[5];
//	r1[5].setLength(5);
//	r1[5].setWidth (10)

//11.	Why is selection sort more efficient than bubble sort on large arrays?
//
//Bubble sort normally has to make many data exchanges to place a value in its correct
//position. Selection sort determines which value belongs in the position currently 
//being filled with the correctly ordered next value and then places that value
//directly there.

//12.	Assume that empName and empID are two parallel arrays of 
//size numEmp that hold employee data.  Using a bubble sort, write 
//the code that will sort the empID array in ascending ID number order, 
//such that the two arrays remain parallel.  That is, after sorting, 
//for all indexes in the arrays, empName[index] must still be the name 
//of the employee whose ID is in empID [index]. 

//const int numEmp = 5;
//string empName[numEmp] = {"John", "Sam", "Mary", "Anna", "Ali"};
//int empID [numEmp] = {17, 320, 444, 890, 101};
//bool swap;
//long temp;
//string tempstr;
//do
//{
//	swap = false;           // There have been no swaps yet on this pass
//	for (int count = 0; count < (numEmp - 1); count++)
//	{
//		if (empID[count] > empID[count + 1])
//		{
//				temp = empID[count];
//				empID[count] = empID[count + 1];
//				empID[count + 1] = temp;
//				tempstr = empName[count];
//				empName[count] = empName[count + 1];
//				empName[count + 1] = tempstr;
//				swap = true;	
//			}
//		}
//	} while (swap);            // While there was a swap on the previous pass
//

//13.	Assume an array exists containing 10 unsorted 3 digit account numbers.   
//Write code to perform a linear search for account number 345.

//const int SIZE = 10;
//int array[SIZE] = { 101, 142, 147, 189, 199, 345, 222,234, 289, 296};
//int index = 0;
//bool found = false;
//
//while (!found && index < SIZE)
//{
//if (array[index++] == 345)
//		found = true;              
//}
//	
//if (found)
//	cout << "Number 345 was found";
//else
//	cout << "Number 345 was not found";


//14.	Under what circumstances can you successfully return a pointer from a function.

//It is safe to return a pointer from the function if the variable pointed 
//to is not local to the function, or if the pointer refers to 
//dynamically allocated memory.

//15.	What is the purpose of the delete operator?
//The delete operator de-allocates memory allocated by new.

//16.	What is the difference between a pointer to a constant and a constant pointer?

//With a pointer to a constant, the variable pointed to cannot be changed, 
//but the pointer itself    can be changed. With a constant pointer, 
//the pointer itself cannot be changed, although the  variable it points to can be changed

//17.	Consider the following function:
//void change (int *p){
//*p = 20; }
//Show how to call the change function so that it sets the integer variable  
//
//int i;
//To 20
//change(&i);

//18.	Consider the following function:
//void modify (int & x){
//x = 10;
//}
//Show how to call the modify function so that it sets the integer variable  
//int i;
//To 10
//modify(i);

//19.	Given the variable initializations:
//int a[5]= {0, 10, 20, 30, 40};
//int k = 3;
//int *p = a + 1;
//
//Determine the output from each of the following statements:
//a.	cout << a[k];
//b.	cout << *(a + k);
//c.	cout << *a;
//d.	cout << a[*a];
//e.	cout << a[*a +2]
//f.	cout << *p;
//g.	cout << p[0];
//h.	cout << p[1];
//
//		A) 30			E) 20
//   	B) 30			F) 10
//   	C) 0 			G) 10
//  	D) 0			H) 20

//20.	Given the array definition:
//		const int numbers [SIZE] = {18, 17, 12, 14};
//
//and we want to pass the array to the function processArray in the following manner:
//processArray (numbers, SIZE );
//Write the correct function header for the processArray function.

//	void processArray(const int *array, int size)

//21.	Assume ip is a pointer to an int.  Write a statement that will 
//	dynamically allocate an integer variable and store its address in ip, 
//	then write a statement that will free the memory allocated in the 
//	statement you just wrote.
//
//	int *ip;
//	ip = new int;
//	delete ip;

//22.	Assume ip is a pointer to an int.  Write a statement that will 
//dynamically allocate an array of 50 integers and store its address in ip.  
//Then write a loop to initialize all the values in the array to 7.  Then write 
//a statement that will free the memory allocated in the statement you just wrote.

//int *ip;
//   ip = new int[50];
//   
//	for (int i = 0; i < 50; i++)
//		ip[i] = 7;   
//	delete [] ip;
//   ip = 0;



// passing array to function

//	#include <iostream>
//	using namespace std;
//	
//	void printArray(int theArray[], int sizeOfArray);
//	
//	int main(){
//		int evan[3] = {20,54,675};
//		int bob[6] = {54,24,7,8,9,99};	
//		printArray(bob, 6);
//	}
//	
//	void printArray(int theArray[], int sizeOfArray){
//		for(int x = 0; x < sizeOfArray; x++){
//			cout << theArray[x] << endl;
//		}
//	}

























