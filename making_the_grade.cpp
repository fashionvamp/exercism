#include <array>
#include <string>
#include <vector>
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> scores {};
    int l = student_scores.size();
    for (int i{0}; i < l; i++) {
        double score = student_scores.at(i);
        scores.emplace_back(static_cast<int>(score));
    }
    
    return scores;
}
int count_failed_students(std::vector<int> student_scores) {
    int count{0};
    int l = student_scores.size();
    
    for (int i{0}; i < l; i++) {
        if (student_scores.at(i) <= 40) {
            count++;
        }
    }
    
    return count;
}
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> scores {};
    int l = student_scores.size();
    for (int i{0}; i < l; i++) {
        int score = student_scores.at(i);
        if (score >= threshold) {
            scores.emplace_back(score);
        }
    }
    
    return scores;
}
std::array<int, 4> letter_grades(int highest_score) {
    int difference = highest_score - 40;
    int section = difference / 4;
    int D = 40 + 1;
    int C = D + section;
    int B = C + section;
    int A = B + section;
    
    return std::array<int, 4> {D, C, B, A};
}
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> ranking {};
    int l = student_scores.size();
    for (int i{0}; i < l; i++) {
        int score = student_scores.at(i);
        std::string name = student_names.at(i);
        
        ranking.emplace_back(std::to_string(i + 1) + ". " + name + ": " + std::to_string(score));
    }
    
    return ranking;
}
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    int l = student_scores.size();
    for (int i{0}; i < l; i++) {
        int score = student_scores.at(i);
        if (score == 100) {
            return student_names.at(i);
        }
    }
    return "";
}
