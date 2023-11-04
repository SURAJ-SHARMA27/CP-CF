#include <iostream>
#include <vector>
#include <unordered_map>

// Custom hash function for pairs
struct PairHash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};

int countLuckyPairs(const std::vector<std::string>& tickets) {
    std::unordered_map<int, int> even_lengths;
    std::unordered_map<std::pair<int, int>, int, PairHash> sum_half;

    for (const std::string& ticket : tickets) {
        int length = ticket.length();
        if (length % 2 == 0) {
            int half = length / 2;
            std::string first_half = ticket.substr(0, half);
            std::string second_half = ticket.substr(half);
            even_lengths[length] = even_lengths[length] + 1;
            int sum_first_half = 0;
            int sum_second_half = 0;
            for (char digit : first_half) {
                sum_first_half += digit - '0';
            }
            for (char digit : second_half) {
                sum_second_half += digit - '0';
            }
            sum_half[std::make_pair(sum_first_half, length)] = sum_half[std::make_pair(sum_first_half, length)] + 1;
        }
    }

    int luckyPairs = 0;

    for (const auto& entry : even_lengths) {
        int length = entry.first;
        int count = entry.second;
        if (count > 1) {
            luckyPairs += count * (count - 1) / 2;
        }
    }

    for (const auto& entry : sum_half) {
        const std::pair<int, int>& key = entry.first;
        int sumHalf = key.first;
        int count = entry.second;
        if (sumHalf == 0) {
            luckyPairs += count * (count - 1) / 2;
        }
    }

    return luckyPairs;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> tickets(n);
    for (int i = 0; i < n; i++) {
        std::cin >> tickets[i];
    }

    int result = countLuckyPairs(tickets);
    std::cout << result << std::endl;

    return 0;
}
