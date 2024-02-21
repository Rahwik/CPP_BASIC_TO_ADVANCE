#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

unordered_map<char, vector<string>> one_digit_words = {
    {'0', {"zero"}},
    {'1', {"one"}},
    {'2', {"two", "twen"}},
    {'3', {"three", "thir"}},
    {'4', {"four", "for"}},
    {'5', {"five", "fif"}},
    {'6', {"six"}},
    {'7', {"seven"}},
    {'8', {"eight"}},
    {'9', {"nine"}},
};

vector<string> two_digit_words = {"ten", "eleven", "twelve"};
string hundred = "hundred";
vector<string> large_sum_words = {"thousand", "million", "billion", "trillion", "quadrillion", "quintillion", "sextillion", "septillion", "octillion", "nonillion"};

string converter(string n) {
    vector<string> word;

    if (n[0] == '-') {
        word.push_back("(negative)");
        n = n.substr(1);
    }

    if (n.length() % 3 != 0 && n.length() > 3) {
        n = string(3 * (((n.length() - 1) / 3) + 1) - n.length(), '0') + n;
    }

    vector<string> sum_list;
    for (size_t i = 0; i < n.length(); i += 3) {
        sum_list.push_back(n.substr(i, 3));
    }

    bool skip = false;

    for (size_t i = 0; i < sum_list.size(); ++i) {
        if (sum_list[i] != "000") {
            skip = false;
        }

        for (size_t j = 0; j < sum_list[i].length(); ++j) {
            sum_list[i] = sum_list[i].substr(sum_list[i].find_first_not_of('0'));
            if (sum_list[i].length() == 1) {
                if ((sum_list.size() > 1 || (sum_list.size() == 1 && sum_list[0].length() == 3)) && i == sum_list.size() - 1 &&
                    (word.back() == hundred || large_sum_words.count(word.back()))) {
                    word.push_back("and");
                }
                word.push_back(one_digit_words[sum_list[i][0]][0]);
                sum_list[i] = sum_list[i].substr(1);
                break;
            }

            if (sum_list[i].length() == 2) {
                if (sum_list[i][0] != '0') {
                    if ((sum_list.size() > 1 || (sum_list.size() == 1 && sum_list[0].length() == 3)) && i == sum_list.size() - 1) {
                        word.push_back("and");
                    }
                    if (sum_list[i].substr(0, 1) == "1") {
                        int index = stoi(sum_list[i].substr(1, 1));
                        if (index < 3) {
                            word.push_back(two_digit_words[index]);
                        } else {
                            string number = one_digit_words[sum_list[i][1]][(index >= 3 && index <= 5) ? 1 : 0];
                            word.push_back(number + ((number.back() == 't') ? "een" : "teen"));
                        }
                    } else {
                        word.push_back(one_digit_words[sum_list[i][0]][(sum_list[i][0] >= '2' && sum_list[i][0] <= '5') ? 1 : 0] +
                                       ((sum_list[i][0] != '8') ? "ty " : "y ") +
                                       ((sum_list[i][1] != '0') ? one_digit_words[sum_list[i][1]][0] : ""));
                    }
                    break;
                } else {
                    sum_list[i] = sum_list[i].substr(1);
                    continue;
                }
            }

            if (sum_list[i].length() == 3) {
                if (sum_list[i][0] != '0') {
                    word.push_back(one_digit_words[sum_list[i][0]][0] + " " + hundred);
                    if (sum_list[i].substr(1) == "00") {
                        break;
                    }
                }
                sum_list[i] = sum_list[i].substr(1);
            }
        }

        if (sum_list.size() - i > 1 && !skip) {
            word.push_back(large_sum_words[sum_list.size() - i - 2]);
            skip = true;
        }
    }

    string result = "";
    for (const string &w : word) {
        result += w + " ";
    }

    result[0] = toupper(result[0]);
    result[result.length() - 1] = tolower(result[result.length() - 1]);

    return (result.find("negative") == string::npos) ? result : result.substr(0, 11) + toupper(result[11]) + result.substr(12);
}

int main() {
    while (true) {
        try {
            string n;
            cout << "Enter any number to convert it into words or 'exit' to stop: ";
            cin >> n;
            if (n == "exit") {
                break;
            }
            stoi(n);
            cout << n << " --> " << converter(n) << endl;
        } catch (invalid_argument &e) {
            cout << "Error: Invalid Number!" << endl;
        }
    }

    return 0;
}
