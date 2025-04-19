#include <string>
using namespace std;
namespace log_line {
    string message(string line) {
        int space_pos = line.find(" ");
        string msg_content = line.substr(space_pos + 1);
        return msg_content;
    }
    string log_level(string line) {
        int bracket_pos = line.find("]");
        string level = line.substr(1, bracket_pos - 1);
        return level;
    }
    string reformat(string line) {
        int bracket_pos = line.find("]");
        string level = line.substr(1, bracket_pos - 1);
        string message_part = line.substr(bracket_pos + 3);
        string formatted_msg = message_part + " (" + level + ")";
        return formatted_msg;
    }
}
