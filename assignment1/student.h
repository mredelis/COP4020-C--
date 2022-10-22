class Student
{
private:
    int admno;
    char sname[20];
    float eng, math, science;
    float total;
    float ctotal();

public:
    void takeData(int admno, const char sname[], float eng, float math, float science);
    void showData();
};
