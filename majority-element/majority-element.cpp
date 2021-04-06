 

#include <iostream>
#include <vector>
#include <unordered_map>

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


int majorityElement(const vector<int>& numbers) {
    for (int value : numbers) {
        if (count_appear(numbers, value) > numbers.size() / 2) {
            return value;
        }
    }
    return -1;
}


int majorityElementFast(const vector<int>& numbers) {
    unordered_map<int, int> counts;
    for (int value : numbers) {
        counts[value] = 0;
    }

    for (int value : numbers) {
        counts[value] ++;
    }

    for (int value : numbers) {
        if (counts[value] > numbers.size()/ 2) {
            return value;
        }
    }
    return -1;
}





int main()
{
    vector<int> numbers = { 2, 2, 1, 1, 1, 2, 2 };
    cout << majorityElement(numbers) << endl;
}
 