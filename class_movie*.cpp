#include <iostream>
#include <string>
using namespace std;
class Movie {
private:
    string name;
    double adultTicketPrice;
    double childTicketPrice;
    int numAdultTicketsSold;
    int numChildTicketsSold;
    double charityPercentage;

public:
    // Constructor
    Movie(const string &name, double adultPrice, double childPrice, int adultSold, int childSold, double charityPercent)
        : name(name), adultTicketPrice(adultPrice), childTicketPrice(childPrice),
          numAdultTicketsSold(adultSold), numChildTicketsSold(childSold), charityPercentage(charityPercent) {}

    // Function to calculate gross amount
    double calculateGrossAmount() const {
        return (adultTicketPrice * numAdultTicketsSold) + (childTicketPrice * numChildTicketsSold);
    }

    // Function to calculate donation amount
    double calculateDonationAmount() const {
        return calculateGrossAmount() * (charityPercentage / 100);
    }

    // Function to calculate net amount
    double calculateNetAmount() const {
        return calculateGrossAmount() - calculateDonationAmount();
    }
};

int main() {
 string movieName;
    double adultTicketPrice, childTicketPrice, charityPercentage;
    int numAdultTicketsSold, numChildTicketsSold;

    // Input movie details
    cout << "Enter movie name: ";
    getline(std::cin >> std::ws, movieName);
    cout << "Enter adult ticket price: ";
    cin >> adultTicketPrice;
    cout << "Enter child ticket price: ";
    cin >> childTicketPrice;
    cout << "Enter number of adult tickets sold: ";
    cin >> numAdultTicketsSold;
    cout << "Enter number of child tickets sold: ";
    cin >> numChildTicketsSold;
    cout << "Enter percentage of gross amount to be donated to charity: ";
    cin >> charityPercentage;

    // Create Movie object
    Movie movie(movieName, adultTicketPrice, childTicketPrice, numAdultTicketsSold, numChildTicketsSold, charityPercentage);

    // Calculate and display results
    cout << "\nMovie Name: " << movieName << std::endl;
    cout << "Gross Amount: $" << movie.calculateGrossAmount() << std::endl;
    cout << "Donation Amount: $" << movie.calculateDonationAmount() << std::endl;
    cout << "Net Amount: $" << movie.calculateNetAmount() << std::endl;

    return 0;
}
