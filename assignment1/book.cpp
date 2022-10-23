#include "book.h"
#include <iostream>
#include <string.h>
using namespace std;

void Book::INPUT(int bNo, std::string title, float price)
{
    this->bookNo = bNo;
    this->bookTitle = title;
    this->price = price;
}

void Book::PURCHASE()
{
    int NoCopies;
    float totalCost;

    cout << "Enter the number of copies of " << bookTitle << " to be purchased ";
    cin >> NoCopies;

    totalCost = Book::TOTAL_COST(NoCopies);
    cout << "Total cost of " << NoCopies << " copies of " << bookTitle << " " << totalCost << endl;
}

float Book::TOTAL_COST(int N)
{
    return N * price;
}