#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(int x) {
    int temp = x;
    bool flag = false;
    vector<int> vec;
    while (temp != 0) {
        vec.insert(vec.begin(), temp%10);
        temp /= 10;
    }

    if (vec.size() == 0) {
        return true;
    }

    for (int i = 0, j = vec.size() - 1; i < vec.size(), j >= 0; i++, j--) {
        if (vec.at(i) == vec.at(j) && x > 0) {
            flag = true;
        }

        else {
            flag = false;
            break;
        }
    }

    return flag;
}

// ALTERNATE SOLUTION
void isPalindrome_second(int x) {
    int temp = x;
    while (x != 0) {
        temp = x % 10;
        x /= 10;
    }
    cout << temp;
}

int main() {
    int num = 121;

    cout << isPalindrome(num);
    isPalindrome_second(num);
}