 

#include <iostream>
#include <vector>

using namespace std;

int count_appear(const vector<int>& numbers, int n) {
    int count = 0;
    for (int value : numbers) {
        if (value == n) {
            count++;
        }
    }
    return count;
}


int most_frequence_value(const vector<int>& numbers) {
    for (int value : numbers) {
        if (count_appear(numbers, value) > numbers.size() / 2) {
            return value;
        }
    }
    return -1;
}

int main()
{
    vector<int> numbers = { 2, 2, 1, 1, 1, 2, 2 };
    cout << most_frequence_value(numbers) << endl;
}
 