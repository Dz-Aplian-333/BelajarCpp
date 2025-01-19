#include <iostream>
using namespace std;

//enum dalam struct
struct Car
{
    int speed;
    enum EngineStatus {ON, OFF};
    enum Direction {MAJU, MUNDUR};
    Direction direction;
    EngineStatus engineState;
};

//enum dalam class
//[::] utk mengakses Struct, Class, Namespace
enum class LampColor {RED, GREEN, BLUE};
int main(){
    Car honda = {
        .speed = 40,
        .engineState = Car::EngineStatus::ON
    };

    LampColor lampColor = LampColor::BLUE;

    if (lampColor == LampColor::BLUE)
    {
        honda.direction = Car::Direction::MAJU;
    }
    
    cout <<"Kecepatan mobil : " << honda.speed << endl;
    cout << "Mesin : " << honda.engineState << endl;
    cout << "Direction : " << honda.direction << endl;

    return 0;
}
