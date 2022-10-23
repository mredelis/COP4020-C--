#include <string>
class Book
{
private:
    int bookNo;
    std::string bookTitle;
    float price;
    float TOTAL_COST(int N);

public:
    void INPUT(int bNo, std::string title, float price);
    void PURCHASE();
};
