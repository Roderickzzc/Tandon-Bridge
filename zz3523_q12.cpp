
#include <iostream>
using namespace std;
int main()
{
    const int inchesPerYard = 36, inchesPerFoot = 12;
    bool seeMinusone=false;
    int dayNum = 0,distance,totalDistance=0;
    int numOfYard, numOfFoot,numOfInches;
    while(seeMinusone == false) {
        cout << "Enter the number of inches the snail traveled in day #" << dayNum << "," << endl;
        cout << "or type -1 if they reached their destination:" << endl;
        cin >> distance;
        if (distance == -1) {
            seeMinusone = true;
        }
        else {
            totalDistance = totalDistance + distance;
            dayNum += 1;
        }
    }
    numOfYard = totalDistance / inchesPerYard;
    numOfFoot = (totalDistance % inchesPerYard) / inchesPerFoot;
    numOfInches = (totalDistance % inchesPerYard) % inchesPerFoot;
    cout << "In " << dayNum << " days, the snail traveled " << numOfYard << " yards, " << numOfFoot << " feet and " << numOfInches << " inches.";

    return 0;
}

