#include <vector>
#include <string>

std::vector<std::string> tokenize(std::string strin) {
    std::vector<std::string> result = {""};
    for (int i = 0, words = 0; i < strin.size(); ++i) {
        if (strin[i] != ' ') result[words] += strin[i];
        else if (result.size() > words && result[words] != "") result.push_back(""), ++words;
    }
    return result;
}
