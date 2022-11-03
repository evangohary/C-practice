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

