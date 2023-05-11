

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

string eraser(string str)
{
    string clear_str;
    int i;
    int k;
    int str_end = str.length();

    for (i = 0, i < str_end; i++;) {
        if (isalpha(str[i]) != 0) {
            clear_str[k++] = str[i];
        }
    }
    return clear_str;

}

int main()
{
    string str;
    cin >> str;

    if (isPalindrome(str)==true {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}