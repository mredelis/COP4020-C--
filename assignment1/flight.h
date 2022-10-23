#include <string>
class Flight
{
private:
    int flightNo;
    std::string destination;
    float distance, fuel;
    float CALCFUEL();

public:
    void FEEDINFO();
    void SHOWINFO();
};
