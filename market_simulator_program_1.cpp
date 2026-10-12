/**
* @file tahira_marketsimulator.cpp
* @author Tahira (netID: Sqn23)
* @date 2026-09-15
* @brief Simulates a supermarket and calculates sales and profits.
*
* This program collects market information and simulates sales 
* for different grocery items.
*/ 

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

struct Market
{
    string name;
    double loyaltyCardCost;
    double budget;

};

const string BREAK_MESSAGE = "=============================\n";

int main()
{
    cout << "Starting market simulation" << endl;
    Market myStore;
    cout << "Enter market name: ";
    getline(cin, myStore.name); 

    cout << "Enter the cost of the loyalty card: $";
    cin >> myStore.loyaltyCardCost;

    cout << "Enter the store's starting budget: $";
    cin >> myStore.budget;

    cout << "\nMarket Information" << endl;
    cout << BREAK_MESSAGE;

    cout << "Name: " << myStore.name << endl;

    cout << fixed << setprecision(2);

    cout << "Loyalty card cost: $"
         << myStore.loyaltyCardCost
         << endl;
         
    cout << "Starting budget: $" << myStore.budget << endl;
    cout << BREAK_MESSAGE;

    //market hours and departments information
    
    const string STORE_HOURS = "7:00 am to 10:00 pm";
    const string DEPT_1 = "Frozen Foods";
    const string DEPT_2 = "Snacks";
    const string DEPT_3 = "Cleaning Supplies";
    const string DEPT_4 = "Health & Beauty";

    cout << "\n" << myStore.name << "'s Hours and Departments" << endl;
    cout << BREAK_MESSAGE;
    cout << "Hours: " << STORE_HOURS << endl << endl;

    cout << "Department 1: " << DEPT_1 << endl;
    cout << "Department 2: " << DEPT_2 << endl;
    cout << "Department 3: " << DEPT_3 << endl;
    cout << "Department 4: " << DEPT_4 << endl;
    cout << BREAK_MESSAGE;

    int breadQuantity;

    cout << "\nBread Scenario" << endl;
    cout << BREAK_MESSAGE;
    cout << "How many loaves of bread would you like: ";
    cin >> breadQuantity;

    double breadWholesaleCost;

    breadWholesaleCost = breadQuantity * 1.50;
    cout << "\nWholesale Cost: $" <<  breadWholesaleCost << endl;

    double breadRegularSale;
    breadRegularSale = breadQuantity * 2.79 * 1.07;

    cout << "Regular Sale: $" << breadRegularSale << endl;

    double breadLoyaltySale;
    breadLoyaltySale = (breadQuantity * 2.49 * 1.07) + myStore.loyaltyCardCost;
    cout << "Loyalty Sale: $" << breadLoyaltySale << endl;

    double breadRegularProfit;
    breadRegularProfit = (breadQuantity * 2.79) - breadWholesaleCost;
    cout << "Regular Profit: $" << breadRegularProfit << endl; 

    double breadLoyaltyProfit;
    breadLoyaltyProfit = (breadQuantity * 2.49)
                       + myStore.loyaltyCardCost
                       - breadWholesaleCost;
    cout << "Loyalty Profit: $" << breadLoyaltyProfit << endl;

    double breadProfitDifference;
    breadProfitDifference = fabs(breadLoyaltyProfit - breadRegularProfit);
    cout << "Profit Difference: $" << breadProfitDifference << endl;
    cout << BREAK_MESSAGE;

    int bagApples;
    cout << "\nApple Scenerio" << endl;
    cout << BREAK_MESSAGE;
    cout << "How many bags of apples would you like: ";

    cin >> bagApples;

    double appleWholesaleCost;
    appleWholesaleCost = bagApples * 2.80;
    cout << "Wholesale Cost: $" << appleWholesaleCost << endl;

    double appleRegularSale;
    appleRegularSale = bagApples * 4.29 * 1.07;
    cout << "Regular Sale: $" << appleRegularSale << endl;

    double appleLoyaltySale;
    appleLoyaltySale = (bagApples * 3.89 * 1.07) + myStore.loyaltyCardCost;
    cout << "Loyalty Sale: $" << appleLoyaltySale << endl;

    double appleRegularProfit;
    appleRegularProfit = (bagApples * 4.29) - appleWholesaleCost;
    cout << "Regular Profit: $" << appleRegularProfit << endl;

    double appleLoyaltyProfit;
    appleLoyaltyProfit = (bagApples * 3.89)
                       + myStore.loyaltyCardCost
                       - appleWholesaleCost;
    cout << "Loyalty Profit: $" << appleLoyaltyProfit << endl;

    double appleProfitDifference;
    appleProfitDifference = fabs(appleLoyaltyProfit - appleRegularProfit);
    cout << "Profit Difference: $" << appleProfitDifference << endl;
    cout << BREAK_MESSAGE; 

    int bottleOfSodas;

    cout << "\nSoda Scenerio" << endl;
    cout << BREAK_MESSAGE;
    cout << "How many bottles of soda would you like: ";
    cin >> bottleOfSodas;

    double sodaWholesaleCost;
    sodaWholesaleCost = bottleOfSodas * 1.10;
    cout << "Wholesale Cost: $" << sodaWholesaleCost << endl;

    double sodaRegularSale;
    sodaRegularSale = bottleOfSodas * 1.99 * 1.07;
    cout << "Regular Sale: $" << sodaRegularSale << endl;

    double sodaLoyaltySale;
    sodaLoyaltySale = (bottleOfSodas * 1.79 * 1.07) + myStore.loyaltyCardCost;
    cout << "Loyalty Sale: $" << sodaLoyaltySale << endl;

    double sodaRegularProfit;
    sodaRegularProfit = (bottleOfSodas * 1.99) - sodaWholesaleCost;
    cout << "Regular Profit: $" << sodaRegularProfit << endl;

    double sodaLoyaltyProfit;
    sodaLoyaltyProfit = (bottleOfSodas * 1.79)
                      + myStore.loyaltyCardCost
                      - sodaWholesaleCost;
    cout << "Loyalty Profit: $" << sodaLoyaltyProfit << endl;

    double sodaProfitDifference;
    sodaProfitDifference = fabs(sodaLoyaltyProfit - sodaRegularProfit);
    cout << "Profit Diffrence: $" << sodaProfitDifference << endl;
    cout << BREAK_MESSAGE;

    int packToiletPaper;

    cout << "\nToilet Paper Scenerio" << endl;
    cout << BREAK_MESSAGE;
    cout << "How mamy packs of toilet paper would you like: ";
    cin >> packToiletPaper;

    double toiletPaperWholesaleCost;
    toiletPaperWholesaleCost = packToiletPaper * 3.20;
    cout << "Wholesale Cost: $" << toiletPaperWholesaleCost << endl;

    double toiletPaperRegularSale;
    toiletPaperRegularSale = packToiletPaper * 5.49 * 1.07;
    cout << "Regular Sale: $" << toiletPaperRegularSale << endl;

    double toiletPaperLoyaltySale;
    toiletPaperLoyaltySale = (packToiletPaper * 4.99 * 1.07) + myStore.loyaltyCardCost;
    cout <<  "Loyalty Sale: $" << toiletPaperLoyaltySale << endl;

    double toiletPaperRegularProfit;
    toiletPaperRegularProfit = (packToiletPaper * 5.49) - toiletPaperWholesaleCost;
    cout << "Regular Profit: $" << toiletPaperRegularProfit << endl;

    double toiletPaperLoyaltyProfit;
    toiletPaperLoyaltyProfit = (packToiletPaper * 4.99)
                             + myStore.loyaltyCardCost
                             - toiletPaperWholesaleCost;
    cout << "Loyalty Profit: $" << toiletPaperLoyaltyProfit << endl;

    double toiletPaperProfitDifference;
    toiletPaperProfitDifference = fabs(toiletPaperLoyaltyProfit - toiletPaperRegularProfit);
    cout << "Profit Difference: $" << toiletPaperProfitDifference << endl;
    cout << BREAK_MESSAGE;

    




    cout << "Exiting simulation" << endl;

    
     return 0; 
}