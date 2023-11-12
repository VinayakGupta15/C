#include<stdio.h>

int main(){
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];
    for(int i=0; i<n_students; i++){
        for(int j=0; j<n_subjects; j++){
            printf("Enter the marks of students %d in subjects %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(int i=0; i<n_students; i++){
        for(int j=0; j<n_subjects; j++){
            printf("The marks of students %d in subjects %d is: %d\n", i+1, j+1, marks[i][j]);
    }
        return 0;
    }
}

// //write a multidimensional array program in c?
// //In a multidimensional array, each element of the array is also an array. For example,
// int[ , ] x = { { 1, 2 ,3}, { 3, 4, 5 } };

// //Here's how we declare a 2D array in C#.
// int[ , ] x = new int [2, 3];

// //In C#, we can initialize an array during the declaration. For example,
// int[ , ] x = { { 1, 2 ,3}, { 3, 4, 5 } };

// //We can also specify the number of rows and columns during the initialization. For example,
// int [ , ] x = new int[2, 3]{ {1, 2, 3}, {3, 4, 5} };

// //We use the index number to access elements of a 2D array. For example,
// // a 2D array
// int[ , ] x = { { 1, 2 ,3}, { 3, 4, 5 } };

// // access first element from first row
// x[0, 0];  // returns 1

// // access third element from second row
// x[1, 2];  // returns 5

// // access third element from first row
// x[0, 2];  // returns 3

// //Example: C# 2D Array
// using System;

// namespace MultiDArray {
//   class Program {
//     static void Main(string[] args) {
           
//         //initializing 2D array
//        int[ , ] numbers = {{2, 3}, {4, 5}};
 	 
//         // access first element from the first row
//        Console.WriteLine("Element at index [0, 0] : "+numbers[0, 0]);
  	 
//         // access first element from second row
//        Console.WriteLine("Element at index [1, 0] : "+numbers[1, 0]);
//     }
//   }
// }

// //Output
// Element at index [0, 0] : 2
// Element at index [1, 0] : 4

// //We can also change the elements of a two-dimensional array. To change the element, we simply assign a new value to that particular index. For example,
// using System;

// namespace MultiDArray {
//   class Program {
//     static void Main(string[] args) {

//     int[ , ] numbers = {{2, 3}, {4, 5}};
 	 
//      // old element
//     Console.WriteLine("Old element at index [0, 0] : "+numbers[0, 0]);
 	 
//       // assigning new value
//     numbers[0, 0] = 222;
  	 
//       // new element
//     Console.WriteLine("New element at index [0, 0] : "+numbers[0, 0]);
//     }
//   }
// }

// //Output
// Old element at index [0, 0] : 2
// New element at index [0, 0] : 222

// //In the above example, the initial value at index [0, 0] is 2. Notice the line,
// // assigning new value
// numbers[0, 0] = 222;

// //Iterating C# Array using Loop
// using System;

// namespace MultiDArray {
//   class Program  {
//     static void Main(string[] args)  {

//       int[ , ] numbers = { {2, 3, 9}, {4, 5, 9} };
   	 
//       for(int i = 0; i < numbers.GetLength(0); i++)  { 
//         Console.Write("Row "+ i+": ");

//         for(int j = 0; j < numbers.GetLength(1); j++)  { 
//           Console.Write(numbers[i, j]+" ");
 
//         }
//         Console.WriteLine(); 
  
//       }  
//     }
//   }
// }

// //Output
// Row 0: 2 3 9
// Row 1: 4 5 9

// //Note: We can also create a 3D array. Technically, a 3D array is an array that has multiple two-dimensional arrays as its elements. For example,
// int[ , , ] numbers = { { { 1, 3, 5 }, { 2, 4, 6 } },
//                                  { { 2, 4, 9 }, { 5, 7, 11 } } };

