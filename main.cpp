//
//  main.cpp
// Fibonacci sequence
//
//  Created by Emmanuel Idehen on 2/18/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  Submitted to Dr. White (CS350 Principles of programming languages)
//  Due Feb. 21st, 2019.
/*
 * Write a program that generates that displays the Fibonacci sequence numbers. Your program
 * should be interative and display the range of Fibonacci sequence giving a number n (e.g 500)
 * Design and implement the fibonacci sequence using two different programming languages. Based
 * on the their corresponding charateristics and reliability vs. built time.
 *
 *
 *
 */

/*
 Psuedo code:
 
 first declare variables
 Ask user to enter in the number
 Iput number
 check if number is grater than 1
 print 0 to the screen
 if number is greater than 2
 print 1 to the screen
 create a loop that iterates the number -2 times
 Add first number and second number and put the value in num_next
 print num_next
 set the value of second number into the first number
 set the value of num_next into the second number!
 */
#include <iostream>

using namespace std;

int main()
{
    
    int first_num = 0;   //first num
    int second_num = 1; // second num
    int num_temp=0;    //  temp num
    int num_next = 1; //   next num
    int number=0;
    /* Ask User for input! */
    cout << "Please enter a number: ";
    cin >> number;              //Take Number!
    cout << "These are the sequence of the number "<< number << "\n" <<endl;
    if (number>=1)             // if users number is greater than 1 !
        cout << 0 << " ";     //  if grater output 0 !
    if (number>=2)           //   if number is greater than 2
        cout << 1 << " ";   //    if grater output 1 !
    
    /* Loop */
    for (int i = 0; i < number-2; i++)
    {
        num_next = first_num + second_num;//adding first and second number and store the value in num_next
        
        cout << num_next << " ";        //  print the value of num_next
        first_num = second_num;        //   take the value of the second number and put it in the first number
        second_num = num_next;        //    set the value of num_next and put it into second number
    }
    cout << endl;
    return 0;
}
/*
 Test case(1)
 
 
 Please Enter your number: 10
 These are the sequence of 10
 
 0 1 1 2 3 5 8 13 21 34
 
 
 
 Test case(2)
 
 Please Enter your number: 20
 These are the sequence of 20
 
 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
 
 
 
 
 Test Case(3)
 
 
 Please Enter your number: 30
 These are the sequence of 30
 
 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229
 
 
 
 
 
 */
 
 
 
 
 
 

