

#include <iostream>
using namespace std;
const double ClubDiscount=0.1;
int main()
{
    double firstPrice, secondPrice, tax;
    char card;

    double BasePrice, PriceAfterDiscount, TotalPrice;
    double MinPrice, MaxPrice, PriceAfterPromotion;

    cout << "Enter price of first item: ";
    cin >> firstPrice;
    cout << "Enter price of second item: ";
    cin >> secondPrice;
    cout << "Does customer have a club card?(Y/N): ";
    cin >> card;
    cout << "Enter tax rate, e.g.5.5 for 5.5% tax: ";
    cin >> tax;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    BasePrice = firstPrice + secondPrice;
    cout << "Base price: " << BasePrice<<endl;
    if (firstPrice <= secondPrice) {
        MaxPrice = secondPrice;
        MinPrice = firstPrice;
    }
    else {
        MinPrice = secondPrice;
        MaxPrice = firstPrice;
    }

    PriceAfterPromotion = 0.5*MinPrice + MaxPrice;

    if (card == 'Y' or card == 'y') {
        PriceAfterDiscount = PriceAfterPromotion * (1 - ClubDiscount);
    }
    else if (card == 'N' or card == 'n') {
        PriceAfterDiscount = PriceAfterPromotion;

    }
    
    cout << "Price after discounts: " << PriceAfterDiscount << endl;

    TotalPrice = PriceAfterDiscount * (1 + tax / 100);
    
    cout.precision(5);
    cout<< "Total price: " << TotalPrice;

    return 0;
}
