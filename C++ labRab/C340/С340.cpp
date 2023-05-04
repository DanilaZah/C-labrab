

#include <iostream>
using namespace std;


bool isPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;

    while (low < high)
    {
        // если произошло несоответствие
        if (str[low] != str[high]) {
            return false;
        }

        low++;
        high--;
    }

    return true;
}


int main()
{
    string str;
    cin >> str;

    if (isPalindrome(str) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}