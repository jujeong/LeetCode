class ParkingSystem {
    public:
    int car[3] = { 0, };
    ParkingSystem(int big, int medium, int small) {
        car[0] = big; car[1] = medium; car[2] = small;
    }
    bool addCar(int carType) {
        if(car[carType - 1] > 0)
        {
            car[carType - 1]--;
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */