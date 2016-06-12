// BInaryRepresentation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

string findDigitsInBinary(int A)
{
    if (A <= 0)
    {
        return "0";
    }

    // build a stack that will hold binary representation of the input
    stack<int> q;
    int n = A;
    while (n > 0)
    {
        q.push(n % 2);
        n /= 2;
    }

    // build the output result
    string result;
    while (!q.empty())
    {
        result = result + "" + to_string(q.top());
        q.pop();
    }

    return result;
}

int main()
{
    cout << findDigitsInBinary(0) << endl;
    cout << findDigitsInBinary(6) << endl;
    cout << findDigitsInBinary(125) << endl;
    return 0;
}

