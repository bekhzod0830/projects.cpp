#include <iostream>
#include <string>

using namespace std;


int main()
{
int var;        
int opt;        
double answer;  
    do
    {   
        cout << " 0. Quit\n 1. Calculate \n 2. See the last result\n \n\n";
        cin >> var;

        switch (var)
        {
            case 0:
                cout << "Thanks for doing nothing: \n";
                return 0;

            case 1:
                cout << "Choose what to do:\n";
                cout << " 1. To add two numbers\n 2. To substract two numbers\n 3. To mulptiply two numbers\n 4. To devide two numbers\n 5. To calculate the factorial of a number\n>";
                cin >> opt;
                switch (opt)
                {   
                    default:
                    cout << "You did not choose possible oprions\n";
                    break;
                    
                    case 1:
                        double var1, var2;
                        cout << "Write first number without any characters: !!!\n";
                        cin >> var1;
                        cout << "Write second number without any characters: !!!\n";
                        cin >> var2;
                        answer = var1 + var2;
                        cout << var1 << " + " << var2 << " = " << var1 + var2 << endl;
                        break;
                        
                    case 2:
                        double var11, var22;
                        cout << "Write first number:\n";
                        cin >> var11;
                        cout << "Write second number:\n";
                        cin >> var22;
                        answer = var11 - var22;
                        cout << var11 << " - " << var22 << " = " << var11 - var22 << endl;
                        break;

                    case 3:
                        double var111, var222;
                        cout << "Write first number:\n";
                        cin >> var111;
                        cout << "Write second number:\n";
                        cin >> var222;
                        answer = var111 * var222;
                        cout << var111 << " * " << var222 << " = " << var111 * var222 << endl;
                        break; 

                    case 4:
                        double var1111, var2222;
                        cout << "Write first number:\n";
                        cin >> var1111;
                        cout << "Write second number:\n";
                        cin >> var2222;
                        answer = var1111 / var2222;
                        cout << var1111 << " / " << var2222 << " = " << var1111 / var2222 << endl;

                        break;
                    case 5:

                        int fact;
                        cout << "Write the factorial number: \n";
                        cin >> fact;
                        int factorial = fact;
                            for(int i = factorial - 1; i > 0; i--)
                            {
                                factorial = factorial * i;
                            }
                            cout << "the factorial of " << fact <<" is " << factorial << endl;
                            answer = factorial;
                        break;
                }   
            break;
            
            case 2:
            cout << "Your last answer: " << answer << endl;
            break;

            default:
            cout << "You did not choose possible oprions\n";
            break;
        }
    }
    while (var != 0);

    system("pause");
    return 0;
}