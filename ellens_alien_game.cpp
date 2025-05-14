namespace targets {
    class Alien {
    public:
    Alien(const int new_x, const int new_y) {
        x_coordinate = new_x;
        y_coordinate = new_y;
    }
    int get_health() {
        return health;
    }
    bool hit() {
        if(is_alive())
            health--;
        return true;
    }
    bool is_alive() {
        return health != 0;
    }
    bool teleport(int new_x, int new_y) {
        x_coordinate = new_x;
        y_coordinate = new_y;
        return true;
    }
    bool collision_detection(Alien other) {
        return other.x_coordinate == x_coordinate && other.y_coordinate == y_coordinate;
    }
    int x_coordinate;
    int y_coordinate;
    int health{3};
    };
} 
