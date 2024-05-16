#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	// Variables needed
    double num1; 
    double num2;  
    double answer; 
    int solve; 
    int size; 

    // User Interface
    cout << "Using PEMDAS, properly order your equation in order of operations needed to be performed to get the correct answer." << endl; 
    cout << "How many calculations are needed to be performed?" << endl; 
    cout << "For example: 2(3 * 2) + 1 is 3 calculations." << endl; 
    cin >> size; 
    cout << "Enter a numerical value." << endl; 
    cin >> num1; 
    cout << "Enter the operation you want to be performed on the first value" << endl; 
    cout << "Enter 1 for addition." << endl; 
    cout << "Enter 2 for subtrction." << endl; 
    cout << "Enter 3 for multiplcation." << endl; 
    cout << "Enter 4 for division." << endl; 
    cout << "Enter 5 for the first value to the power of the second." << endl; 
    cout << "Enter 6 for the square root of the value you just entered." << endl; 
    cin >> solve; 
    cout << "If you only need the square root of the first value, just enter 0 for the second value." << endl; 
    cout << "Enter the second numerical value." << endl; 
    cin >> num2; 

    // Calculations 
    if (solve == 1)
    {
        answer = num1 + num2; 
        cout << "The answer is: " << answer << endl; 
    }
    else if (solve == 2)
    {
        answer = num1 - num2;
        cout << "The answer is: " << answer << endl; 
    }
    else if (solve == 3)
    {
        answer = num1 * num2;
        cout << "The answer is: " << answer << endl; 
    }
    else if (solve == 4)
    {
        answer = num1 / num2;
        cout << "The answer is: " << answer << endl; 
    }
    else if (solve == 5)
    {
        answer = pow(num1, num2);
        cout << "The answer is: " << answer << endl;  
    }
    else if (solve == 6)
    {
        answer = sqrt(num1);
        cout << "The answer is: " << answer << endl; 
    }
    else
    {
        cout << "Invalid input, try again." << endl;
        cin >> solve; 
    }

    // Create boolean value to see if more calculations are needed
    // Loop if yes, exit if no

    bool moreCalc = true;
    cout << "Do you need to perform another calculation to this value? " << endl;
    cout << "Enter 1 for yes, 0 for no." << endl; 
    cin >> moreCalc;
    if (moreCalc == 1)
    {
        cout << "Enter the operation you want to be performed on the first value" << endl; 
        cout << "Enter 1 for addition." << endl;
        cout << "Enter 2 for subtrction." << endl; 
        cout << "Enter 3 for multiplcation." << endl; 
        cout << "Enter 4 for division." << endl; 
        cout << "Enter 5 for the first value to the power of the second." << endl; 
        cout << "Enter 6 for the square root of the value you just entered." << endl; 
        cout << "If you only need the square root of " << answer << ", just enter 0 for the second value." << endl;
        cin >> solve; 
        cout << "Enter the numerical value you want to perform on " << answer << endl; 
        cin >> num2;
        if (solve == 1)
        {
            answer = answer + num2; 
        }
        else if (solve == 2)
        {
            answer = answer - num2;
        }
        else if (solve == 3)
        {
            answer = answer * num2;
        }
        else if (solve == 4)
        {
            answer = answer / num2;
        }
        else if (solve == 5)
        { 
            answer = pow(answer, num2);
        }
        else if (solve == 6)
        {
            answer = sqrt(answer); 
        }
        else
        {
            cout << "Invalid input, try again." << endl;
            cin >> solve;
        }

        cout << "The answer is: " << answer << endl;
        cout << "Do you need to perform another calculation to this value? " << endl; 
        cout << "Enter 1 for yes, 0 for no." << endl; 
        cin >> moreCalc; 
    }
    else if (moreCalc == 0)
    {
        cout << "Your final answer is: " << answer << endl; 
    }
    else
    {
		cout << "Invalid input, try again." << endl;  
		cin >> moreCalc;  
	}


	return 0;
}
