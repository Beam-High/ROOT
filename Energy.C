using namespace std;

int main()
{
    char op;
    float num1, num2, num3;

    cout << "Enter + to continue   ";
    cin >> op;

    cout << "Enter p,c,m   ";
    cin >> num1 >> num2 >> num3;

    switch (op)
    {
    case '+':
        cout << sqrt(((num1 * num1)*(num2*num2)) + ((num3*num3)*(num2*num2*num2*num2)));
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}
