#include "vehicle_purchase.h"
namespace vehicle_purchase {
bool needs_license(std::string kind) {
    if(kind == "car" || kind == "truck") {
        return true;
    } else {
        return false;
    }
}
std::string choose_vehicle(std::string option1, std::string option2) {
    if(option1 < option2) {
        return option1 + " is clearly the better choice.";
    } else if(option1 > option2) {
        return option2 + " is clearly the better choice.";
    }
    return "";
}
double calculate_resell_price(double original_price, double age) {
    if(age < 3.0) {
        return original_price * 0.8;
    } else if(age >= 10.0) {
        return original_price * 0.5;
    } else {
        return original_price * 0.7;
    }
}
}
