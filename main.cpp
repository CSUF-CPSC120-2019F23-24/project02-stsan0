// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

  int main()
  {
  double days, hotel, meal;
  std::string location;
    // Welcome
  std::cout <<"Welcome to the Business Trip Tracker.\n";

    // Questions
  std::cout <<"Where are you staying?";
  // multiple words in trip location here
  getline(std::cin, location);
  std::cout << "How many days will the trip take?";
  std::cin >> days;
  std::cout << "What is the total hotel cost?";
  std::cin >> hotel;
  std::cout << "What is the total meal cost?";
  std::cin >> meal;
    // Calculations

  double total = hotel + meal;

  // output
  // add setprecision after days variable to introduce decimal points
  std::cout << std::right << std::setw(15)<< "Location" << std::setw(17) << "Days"
  << std::setw(17) << "Hotel" << std::setw(17) << "Meal" << std::setw(17)
  << "Total"<< std::endl;
  std::cout << std::right << std::setw(15) << location.substr(0,20) << std::setw(15) << days << std::setprecision(2)<< std::fixed << std::setw(16) <<"$"<<
  hotel << std::setw(12) <<"$"<< meal << std::setw (10) <<"$"<<total<<
  std::endl;
    return 0;
  }
