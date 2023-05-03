

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
    int str_end = str.length();

    for (i = 0, i < str_end; i++;) {
        if (isalpha(str[i]) == true) {
            clear_str = clear_str + str.substr(i, 1);
        }
    }
    return clear_str;

}

int main()
{
    string str;
    cin >> str;
    cout << (eraser(str)) << endl;
    cout << str.length() - 1<<endl;
    cout << str[0] << endl;

    if (isPalindrome(eraser(str))) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}