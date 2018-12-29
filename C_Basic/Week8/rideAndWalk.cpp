#include <iostream>
using namespace std;

int main() {
    int unlockTime = 27, lockTime = 23, dataSize = 0, distance = 0.0, dataList[100];
    double walkSpeed = 1.2, rideSpeed = 3.0, walkTimeCost = 0.0, rideTimeCost = 0.0;

    cin >> dataSize;

    for (int i = 0; i < dataSize; i++) {
        cin >> dataList[i];
    }

    for (int j = 0; j < dataSize; j++) {
        distance = dataList[j];
        walkTimeCost = double(distance) / walkSpeed;
        rideTimeCost = double(distance) / rideSpeed + double(unlockTime) + double(lockTime);

        if (walkTimeCost < rideTimeCost)
            cout << "Walk" << endl;
        else if (rideTimeCost < walkTimeCost)
            cout << "Bike" << endl;
        else
            cout << "All" << endl;
    }
    return 0;
}