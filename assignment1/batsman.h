class Batsman
{
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    double batavg;
    double calcavg();

public:
    void readData(int bcode, const char bname[], int innings, int notout, int runs);
    void displayData();
};
