#include <iostream>
#include <fstream>
using namespace std;

// Edgar Jarquin

// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.
struct TemperatureRecord
{
    int day;
    int temperature;
};

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(int day, int temperature); // TODO: Fix the parameters
void printTemperatures(const TemperatureRecord DayAndTemp[], int size);
TemperatureRecord findMin(const TemperatureRecord DayAndTemp[], int size);
TemperatureRecord findMax(const TemperatureRecord DayAndTemp[], int size);
double findAverage(const TemperatureRecord DayAndTemp[], int size);

TemperatureRecord DayAndTemp [MAX_DAYS];

int main() {
    // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    
    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file
    readTemperatures(day, temperature);

    // TODO: Step 4 - Print the temperatures
    printTemperatures(DayAndTemp, size);

    // TODO: Step - Compute and display min, max, and average temperature
    findAverage(DayAndTemp, size);
    
    TemperatureRecord min = findmin(DayAndTemp, size);
    TemperatureRecord max = findMax(DayAndTemp, size);

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array
void readTemperatures(int day, int temperature)
{
    ifstream file;
    file.open("temps.txt");
    if (!file) {
        cout << "File open failure!";
    }

    while(count < MAX_DAYS && (file >> TemperatureRecord[count].day)) {
        file >> TemperatureRecord[count].temperature;
        count++ 
    }
    file.close();
}

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table
void printTemperatures(const TemperatureRecord DayAndTemp[], int size) {
    cout << "Day   Temp" << endl;
    for (int i = 0; i < size; i++) {
        cout << DayAndTemp[i].day << "   " << DayAndTemp[i].temperature << endl;
    }
}
// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature
TemperatureRecord findMin(const TemperatureRecord DayAndTemp[], int size);{
    TemperatureRecord min = DayAndTemp[0]
    for (int i = 0; i < size; i++){
        if (DayAndTemp[i].temperature < min.temperature){
            min = DayAndTemp[i].temperature;
        }
    }

     cout << "The lowest temperature is on day: " << DayAndTemp[i].day << " with a temperature of: " << min << endl;
}

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature
TemperatureRecord findMax(const TemperatureRecord DayAndTemp[], int size);{
    TemperatureRecord max = DayAndTemp[0]
    for (int i = 0; i < size; i++){
        if (DayAndTemp[i].temperature > max.temperature){
            max = DayAndTemp[i].temperature;
        }
    }

    cout << "The max temperature is on day: " << DayAndTemp[i].day << " with a temperature of: " << max << endl;
}

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
double findAverage(const TemperatureRecord DayAndTemp[], int size) {
    double total = 0
    for (double i = 0; i < size; i++){
        total += DayAndTemp[i].temperature;
    }
    cout << "The average temperature is " << total / size << endl;
}