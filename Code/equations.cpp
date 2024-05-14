#include <iostream>
#include <cmath>

using namespace std;

int main()
{

// Variables needed
    double num1;
    double num2; 
    int operations;
    double answer;
    int solve;

// User Interface
    cout << "Using PEMDAS, properly order your equation and decide the number of operations needed to be performed to get the correct answer." << endl;
    cout << "How many operations are needed to solve your equation?" << endl;
    cin >> operations;
    cout << "Enter a numerical value." << endl;
    cin >> num1;
    cout << "Enter the operation you want to be performed on the first value" << endl;
    cout << "Enter 1 for addition." << endl;
    cout << "Enter 2 for subtrction." << endl;
    cout << "Enter 3 for multiplcation." << endl;
    cout << "Enter 4 for division." << endl;
    cout << "Enter 5 for the remainder of the dividend." << endl;
    cout << "Enter 6 for the first value to the power of the second." << endl;
    cout << "Enter 7 for the square root of the value you just entered." << endl;
    cin >> solve;
    cout << "If you only need the square root of the first value, just enter 0 for the second value." << endl;
    cout << "Enter the second numerical value." << endl;
    cin >> num2;

// Loop # of operations needed to solve the equation
    int i = 0;
    while(i <= operations)
    {
// User Calculations
        switch(solve)
        {
            case 1:
                double sum = num1 + num2;
                cout << "The sum of your values is " << sum << "." << endl;
                double sum = answer;
                i++;
            case 2:
                double sub = num1 - num2;
                cout << "The difference of your values is " << sub << "." << endl;
                double sub = answer;
                i++;
            case 3:
                double mult = num1 * num2;
                cout << "The product of your values is " << mult << "." << endl;
                double mult = answer;
                i++;
            case 4:
                double div = num1 / num2;
                cout << "The quotient of your values is " << div << "." << endl;
                double div = answer;
                i++;
            case 5:
                double rem = num1 % num2;
                cout << "The remainder of your values is " << rem << "." << endl;
                double rem = answer;
                i++;
            case 6:
                double power = pow(num1, num2);
                cout << "The power of your first value to the second is " << power << "." << endl;
                double power = answer;
                i++;
            case 7:
                double squareroot = sqrt(num1);
                cout << "The square root of your value is " << squareroot << "." << endl;
                double squareroot = answer;
                i++;
            default:
                cout << "Invalid operation entry." << endl;
        }
        double answer = num1;
        cout << "Enter the operation you want to perform to " << answer << endl;
        cout << "Remember: 1= Addition; 2= Subtraction; 3= Multiplcation; 4= Division; " << endl;
        cout << "5= Remainder of quotient; 6= " << answer << " to a power; 7= Square root of " << answer << endl;
        cin >> solve;
        cout << "If you only need the square root of the first value, just enter 0 for the second value." << endl;
        cout << "Enter the second numerical value." << endl;
        cin >> num2;
    }
    cout << "The answer to your equation is " << answer << endl;
    return 0;
}
