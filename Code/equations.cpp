#include <iostream>
#include <strings>
#include <cmath>

using namespace std;

int main() 
{
    string contCalc;
    double answer;
    double num1;
    double num2;
    double num3;
    double num4;
    int calc;
    double finalAnswer;
    
    cout << "Enter the first number you need to calculate: " << endl;
    cin >> num1;
    cout << "What operation would you like to perform to " << num1 << "?" << endl;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;
    cout << "Enter 5 for square root of " << num1 << endl;
    cout << "Enter 6 for " << num1 << " to the power of another number" << endl;
    cin >> calc;
    
    if (calc == 1)
    {
        cout << "Enter the second number you need to add to " << num1 << endl;
        cin >> num2;
        answer = num1 + num2;
        cout << " Your answer is: " << answer << endl;
        answer = num3;
    }
    else if (calc == 2)
    {
        cout << "Enter the second number you need to subtract from " << num1 << endl;
        cin >> num2;
        answer = num1 - num2;
        cout << " Your answer is: " << answer << endl;
        answer = num3;
    }
    else if (calc == 3)
    {
        cout << "Enter the second number you need to multiply " << num1 << " by" << endl;
        cin >> num2;
        answer = num1 * num2;
        cout << " Your answer is: " << answer << endl;
        answer = num3;
    }
    else if (calc == 4)
    {
        cout << "Enter the second number you need to divide " << num1 << " by" << endl;
        cin >> num2;
        answer = num1 / num2;
        cout << " Your answer is: " << answer << endl;
        answer = num3;
    }
    else if (calc == 5)
    {
        answer = sqrt(num1);
        cout << " Your answer is: " << answer << endl;
        answer = num3;
    }
    else if (calc == 6)
    {
        cout << "Enter the second number you need to raise " << num1 << " to the power of" << endl;
        cin >> num2;
        answer = pow(num1, num2);
        cout << "Your answer is: " << answer << endl;
        answer = num3;
    }
    else
    {
        cout << "Invalid entry, please try again." << endl;
    }
    
    cout << "Do you need to perform another calculation to " << answer << "?" << endl;
    cout << "Enter 'yes' to continue, enter 0 to quit." << endl;
    cin >> contCalc
    while (contCalc == "yes")
    {
        cout << "What operation do you need to perform on " << num3 << "?" << endl;
        cout << "Enter 1 for addition" << endl;
        cout << "Enter 2 for subtraction" << endl;
        cout << "Enter 3 for multiplication" << endl;
        cout << "Enter 4 for division" << endl;
        cout << "Enter 5 for square root of " << num1 << endl;
        cout << "Enter 6 for " << num1 << " to the power of another number" << endl;
        cin >> calc;
        
        if (calc == 1)
        {
            cout << "Enter the second number you need to add to " << num3 << endl;
            cin >> num4;
            finalAnswer = num3 + num4;
            num3 = finalAnswer;
            cout << " Your answer is: " << finalAnswer << endl;
            cout << "Do you need to continue calculations on " << finalAnswer << "?" << endl;
            cout << "If so, enter 'yes' otherwise enter 0"  << endl;          
            cin >> contCalc;            
        }
        else if (calc == 2)
        {
            cout << "Enter the second number you need to subtract from " << num3 << endl;
            cin >> num4;
            finalAnswer = num3 - num4;
            num3 = finalAnswer;
            cout << " Your answer is: " << finalAnswer << endl;
            cout << "Do you need to continue calculations on " << finalAnswer << "?" << endl;
            cout << "If so, enter 'yes' otherwise enter 0" << endl;
            cin >> contCalc;
        }
        else if (calc == 3)
        {
            cout << "Enter the second number you need to multiply " << num3 << " by" << endl;
            cin >> num4;
            finalAnswer = num3 * num4;
            num3 = finalAnswer;
            cout << " Your answer is: " << finalAnswer << endl;
            cout << "Do you need to continue calculations on " << finalAnswer << "?" << endl;
            cout << "If so, Enter 'yes' otherwise enter 0" << endl;
            cin >> contCalc;
        }
        else if (calc == 4)
        {
            cout << "Enter the second number you need to divide " << num3 << " by" << endl;
            cin >> num4;
            finalAnswer = num3 / num4;
            num3 = finalAnswer;
            cout << " Your answer is: " << finalAnswer << endl;
            cout << "Do you need to continue calculations on " << finalAnswer << "?" << endl;
            cout << "If so, Enter 'yes' otherwise enter 0" << endl;
            cin contCalc;
        }
        else if (calc == 5)
        {
            finalAnswer = sqrt(num3);
            num3 = finalAnswer;
            cout << " Your answer is: " << finalAnswer << endl;
            cout << "Do you need to continue calculations on " << finalAnswer << "?" << endl;
            cout << "If so, Enter 'yes' otherwise enter 0" << endl;
            cin >> contCalc;
        }
        else if (calc == 6)
        {
            cout << "Enter the second number you need to raise " << num3 << " to the power of" << endl;
            cin >> num4;
            finalAnswer = pow(num3, num4);
            cout << "Your answer is: " << finalAnswer << endl;
            cout << "Do you need to continue calculations on " << finalAnswer << "?" << endl;
            cout << "If so, Enter 'yes' otherwise enter 0" << endl;
            cin >> contCalc;
        }
        else
        {
            cout << "Invalid entry, please try again." << endl;
        }
    }
    return 0;
}
