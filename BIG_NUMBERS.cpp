#include<bits/stdc++.h>
using namespace std;

string summation (string num1, string num2)
{

    if (num1.size() > num2.size())
    {
        reverse(num2.begin(), num2.end());
        while (num1.size() > num2.size()) num2.push_back('0');
        reverse(num2.begin(), num2.end());
    }
    else
    {
        reverse (num1.begin(), num1.end());
        while (num2.size() > num1.size()) num1.push_back('0');
        reverse (num1.begin(), num1.end());
    }
    int carry = 0;
    string sum;
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        int val = num1[i] - '0' + num2[i] - '0' + carry;
        if (val > 9)
        {
            sum.push_back(val - 10 + '0');
            carry = 1;
        }
        else
        {
            sum.push_back (val + '0');
            carry = 0;
        }
    }
    if (carry == 1) sum.push_back('1');
    reverse(sum.begin(), sum.end());

    return sum;
}
int main()
{
    string num1, num2;
    cin >> num1 >> num2;
    string sum = summation(num1, num2);
    cout << sum << endl;
    return 0;
}



