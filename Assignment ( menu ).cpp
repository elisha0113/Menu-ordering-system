# include <iostream>
# include <iomanip>
#include <string>
using namespace std;

//global variables

// prices
#define N 9.00
#define C 8.00
#define M 6.00
#define H 5.00
#define F 12.00

// delivery fee
#define delivery_fee 2.00

//customer number
int customer;

// enter the meal type that customers want
char mealType;

// for customer to enter more than one meal
int quantityN = 0;
int quantityC = 0;
int quantityM = 0;
int quantityH = 0;
int quantityF = 0;

//meal type * quantity
double priceN;
double priceC;
double priceM;
double priceH;
double priceF;

//for daily report 
int totalQuantityN;
int totalQuantityM;
int totalQuantityC;
int totalQuantityH;
int totalQuantityF;
double moneyCollected;

// to calculate the total sales for each meal of the whole day
double totalsalesN;
double totalsalesM;
double totalsalesC;
double totalsalesH;
double totalsalesF;

//calculate the total SST collected
double totalSST;


//for bill
double mealCharges = 0.0;
double SST;
double changeDue;
double customerpaid;
double totaltopay;

// for remove item
int checkquantityN;
int checkquantityC;
int checkquantityF;
int checkquantityH;
int checkquantityM;

// for payment
char payMethod;
string cardNum;

// for rating
char rate;
int rating;
int Verybad;
int Bad;
int Good;
int Amazing;
int Excellent;

// for comment 
const int maxComments = 100;
std::string comments[maxComments];
int commentCount = 0;
string com;

// option for delivery
char option;

//  H&S logo
void printLogo() {
    std::cout << " \n";
    std::cout << "  &&&   &&&  &&&&&&&&& \n";
    std::cout << "  &&&   &&&  &&&       \n";
    std::cout << "  &&&&&&&&&  &&&&&&&&& \n";
    std::cout << "  &&&   &&&        &&& \n";
    std::cout << "  &&&   &&&  &&&&&&&&& \n";
}

// show menu
void menu() {
    cout << "\n                                                            Menu" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << setw(20) << left << "Categories of Meal" << setw(20) << right << "Prices (RM)" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << setw(20) << left << "Nasi Lemak (N)      " << setw(20) << right << setprecision(2) << fixed << N << endl;
    cout << setw(20) << right << "Fragrant coconut rice, cooked to perfection, forms the heart of this dish." << endl; // description
    cout << setw(20) << left << "\nChicken Rice (C)  " << setw(20) << right << setprecision(2) << fixed << C << endl;
    cout << setw(20) << right << "The chicken is tender and flavorful, while the rice is infused with the essence of chicken and ginger." << endl;
    cout << setw(20) << left << "\nMasala Dosa (M)   " << setw(20) <<  right << setprecision(2) << fixed << M << endl;
    cout << setw(20) << right << "A thin, crispy rice and lentil crepe envelops a spiced potato filling, creating a delightful contrast in textures." << endl;
    cout << setw(20) << left << "\nHamburger (H)     " << setw(20) << right << setprecision(2) << fixed << H << endl;
    cout << setw(20) << right << "A juicy beef patty, expertly seasoned and flame-grilled to perfection, is nestled between a soft, toasted bun." << endl;
    cout << setw(20) << left << "\nFish and Chips (F)" << setw(20) << right << setprecision(2) << fixed << F << endl;
    cout << setw(20) << right << "Fish and Chips, a generous portion of flaky white fish, typically cod or haddock, is coated in a light, crispy batter and deep-fried to golden perfection." << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}

// Selection for customer
void selection()
{
    cout << "\n\nPlease enter your meal type here : ";
    cin >> mealType;

    // lowercase and uppercase is accepted
    if (mealType == 'N' || mealType == 'n')
    {
        cout << "Please enter the quantity : ";
        cin >> quantityN;
        // to make sure that the quantity must be greater than 0
        if (quantityN > 0) 
        {
            priceN = quantityN * N;
            checkquantityN += quantityN;
            cout << "Meal Type N: " << quantityN << " @ RM " << N << " = RM " << priceN << endl;
            mealCharges += priceN;
            totalQuantityN += quantityN;
            totalsalesN += priceN;
            return selection();
        }
        else
        {
            cout << "\nError.Please order it again.";
            return selection();
        }

    }

    else if (mealType == 'M' || mealType == 'm')
    {
        cout << "Please enter the quantity : ";
        cin >> quantityM;
        if (quantityM > 0)
        {
            priceM = quantityM * M;
            checkquantityM += quantityM;
            cout << "Meal Type M: " << quantityM << " @ RM " << M << " = RM " << priceM << endl;
            mealCharges += priceM;
            totalQuantityM += quantityM;
            totalsalesM += priceM;
            return selection();
        }
        else
        {
            cout << "\nError.Please order it again.";
            return selection();
        }
    }

    else if (mealType == 'C' || mealType == 'c')
    {
        cout << "Please enter the quantity : ";
        cin >> quantityC;
        if (quantityC > 0)
        {
            priceC = quantityC * C;
            checkquantityC += quantityC;
            cout << "Meal Type C: " << quantityC << " @ RM " << C << " = RM " << priceC << endl;
            mealCharges += priceC;
            totalQuantityC += quantityC;
            totalsalesC += priceC;
            return selection();
        }
        else
        {
            cout << "\nError.Please order it again.";
            return selection();
        }
    }

    else if (mealType == 'H' || mealType == 'h')
    {
        cout << "Please enter the quantity : ";
        cin >> quantityH;

        if (quantityH > 0)
        {
            priceH = quantityH * H;
            checkquantityH += quantityH;
            cout << "Meal Type H: " << quantityH << " @ " << H << " = " << priceH << endl;
            mealCharges += priceH;
            totalQuantityH += quantityH;
            totalsalesH += priceH;
            return selection();
        }

        else
        {
            cout << "\nError.Please order it again.";
            return selection();
        }
    }

    else if (mealType == 'F' || mealType == 'f')
    {
        cout << "Please enter the quantity : ";
        cin >> quantityF;
        if (quantityF > 0)
        {
            priceF = quantityF * F;
            checkquantityF += quantityF;
            cout << "Meal Type F: " << quantityF << " @ " << F << " = " << priceF << endl;
            mealCharges += priceF;
            totalQuantityF += quantityF;
            totalsalesF += priceF;
            return selection();
        }

        else
        {
            cout << "\nError.Please order it again.";
            return selection();
        }
    }

    // error code
    else if (mealType != 'M' && mealType != 'm' && mealType != 'C' && mealType != 'c' && mealType != 'N' && mealType != 'n' && mealType != 'H' && mealType != 'h' && mealType != 'F' && mealType != 'f' && mealType != 'Z' && mealType != 'z' && mealType != 'X' && mealType != 'x')
    {
        cout << "\nDear customer, the code you entered is not in our menu. \nPlease try again or enter 'Z' to exit. ";
        return selection();
    }

    // let customers exit ordering
    else if (mealType == 'Z' || mealType == 'z')
    {
        cout << "\nWe appreciate your visit to our restaurant!\nPlease feel free to return anytime!" << endl;
    }

    
    //Remove Items
    else if (mealType == 'X' || mealType == 'x')
    {
        cout << "\nWhich meal would you like to remove?" << endl;
        cin >> mealType;

        if (mealType == 'N' || mealType == 'n')
        {
            cout << "Please enter the quantity : ";
            cin >> quantityN;

            // to check whether it had been order
            if (checkquantityN < quantityN)
            {
                cout << "\nSorry, you didnt order this much before.";
                return selection();
            }

            else if (checkquantityN >= quantityN)
            {
                priceN = quantityN * N;
                mealCharges -= priceN;
                totalQuantityN -= quantityN;
                totalsalesN -= priceN;
                return selection();
            }
           
        }

        else if (mealType == 'C' || mealType == 'c')
        {
            cout << "Please enter the quantity : ";
            cin >> quantityC;

            if (checkquantityC < quantityC)
            {
                cout << "\nSorry, you didnt order this much before.";
                return selection();
            }

            else if (checkquantityC >= quantityC)
            {
                priceC = quantityC * C;
                mealCharges -= priceC;
                totalQuantityC -= quantityC;
                totalsalesC -= priceC;
                return selection();
            }
        }

        else if (mealType == 'M' || mealType == 'm')
        {
            cout << "Please enter the quantity : ";
            cin >> quantityM;

            if (checkquantityM < quantityM)
            {
                cout << "\nSorry, you didnt order this much before.";
                return selection();
            }

            else if (checkquantityM >= quantityM)
            {
                priceM = quantityM * M;
                mealCharges -= priceM;
                totalQuantityM -= quantityM;
                totalsalesM -= priceM;
                return selection();
            }
        }

        else if (mealType == 'H' || mealType == 'h')
        {
            cout << "Please enter the quantity : ";
            cin >> quantityH;
            
            if (checkquantityH < quantityH)
            {
                cout << "\nSorry, you didnt order this much before.";
                return selection();
            }

            else if (checkquantityH >= quantityH)
            {
                priceH = quantityH * H;
                mealCharges -= priceH;
                totalQuantityH -= quantityH;
                totalsalesH -= priceH;
                return selection();
            }
        }

        else if (mealType == 'F' || mealType == 'f')
        {
            cout << "Please enter the quantity : ";
            cin >> quantityF;
            
            if (checkquantityF < quantityF)
            {
                cout << "\nSorry, you didnt order this much before.";
                return selection();
            }

            else if (checkquantityF >= quantityF)
            {
                priceF = quantityF * F;
                mealCharges -= priceF;
                totalQuantityF -= quantityF;
                totalsalesF -= priceF;
                return selection();
            }
        }

        else 
        {
            cout << "Error.";
            return selection();
        }
    }
}

// bill for customers
// Add sst
void bill()
{
    cout << " \nDelivery(Q) / Dine in or Take away (E) : ";
    cin >> option;

    if (option == 'Q' || option == 'q')
    {
        cout << "\nHere is your bill.";
        cout << " \nMeal Charges  =  RM " << mealCharges << endl;
        SST = mealCharges * 0.1;
        cout << " Add 10% SST   =  RM " << SST << endl;
        cout << "Delivery fee : RM " << delivery_fee << endl;
        totalSST += SST;
        cout << "-----------------------" << endl;
        totaltopay = mealCharges + SST + delivery_fee;
        moneyCollected += totaltopay;
        cout << "TOTAL TO PAY = RM " << totaltopay << endl;
        cout << "-----------------------" << endl;
    }
    
    else if (option == 'E' || option == 'e')
    {
        cout << "\nHere is your bill.";
        cout << "\nMeal Charges  =  RM " << mealCharges << endl;
        SST = mealCharges * 0.1;
        cout << " Add 10% SST   =  RM " << SST << endl;
        totalSST += SST;
        cout << "\n-----------------------" << endl;
        totaltopay = mealCharges + SST;
        moneyCollected += totaltopay;
        cout << "TOTAL TO PAY = RM " << totaltopay << endl;
        cout << "-----------------------" << endl;
    }

    else
    {
        cout << "Error. Please type again.";
        return bill();
    }
}

// can pay by cash or card
void payment()
{
    cout << "\nIf you prefer to pay with cash, kindly select 'S' as your payment method.\nIf you prefer to pay by card, please choose 'R' as your payment option.";
    cout << "\nYou prefer : ";
    cin >> payMethod;

    if (payMethod == 'S' || payMethod == 's')
    {
        cout << "\nAmount Paid  = RM";
        cin >> customerpaid;

        // to check that customer give enough money or not
        if (customerpaid < totaltopay)
        {
            cout << "\nDear customer, your total is RM " << totaltopay << ", but your payment is insufficient.\n";
            return payment();
        }

        else if (customerpaid >= totaltopay)
        {
            cout << "Changedue = RM " << customerpaid - totaltopay << endl;
        }
    }
    
    else if (payMethod == 'R'|| payMethod == 'r')
    {
        cout << "\nPlease enter your card number : " << endl;
        cin >> cardNum;

        // card number only has 16 digit
        if (cardNum.length() != 16)
        {
            cout << "Invalid !" << endl;
            return payment();
        }

        else if (cardNum.length() == 16)
        { 
            cout << "\nValid !";
        }
    }

    else
    {
        cout << "\nError." << endl;
        return payment();
    }
    
}

// daily report 
void report()
{
    cout << "\n\n\n\nTotal number of customers : " << customer << endl;
    
    cout << "\nMeal Sales For Today" << endl;
    cout << left << setw(20) << "Meal Type" << setw(15) << "Quantity Sold" << setw(15) << "Sales Amount (RM)" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << setw(20) << "Nasi Lemak (N)" << setw(15) << totalQuantityN << setw(15) << fixed << setprecision(2) << totalsalesN << endl;
    cout << setw(20) << "Chicken Rice (C)" << setw(15) << totalQuantityC << setw(15) << fixed << setprecision(2) << totalsalesC << endl;
    cout << setw(20) << "Masala Dosa (M)" << setw(15) << totalQuantityM << setw(15) << fixed << setprecision(2) << totalsalesM << endl;
    cout << setw(20) << "Hamburger (H)" << setw(15) << totalQuantityH << setw(15) << fixed << setprecision(2) << totalsalesH << endl;
    cout << setw(20) << "Fish and Chips (F)" << setw(15) << totalQuantityF << setw(15) << fixed << setprecision(2) << totalsalesF << endl;
    cout << "============" << setw(7) << "=======" << setw(11) << "===================================" << endl;
    cout << setw(20) << "TOTALS" << setw(15) << totalQuantityC + totalQuantityF + totalQuantityH + totalQuantityM + totalQuantityN << setw(15) << fixed << setprecision(2) << totalsalesC + totalsalesF + totalsalesH + totalsalesM + totalsalesN << endl;
    cout << "\tTOTAL SST charges (RM) = " << totalSST << endl;
    cout << "\tTOTAL Ringgit Collected (RM) = " << moneyCollected;

    // check reviews given by customers
    cout << "\n\n\t\tReview by customers";
    cout << "\nVery Bad : " << Verybad;
    cout << "\nBad : " << Bad;
    cout << "\nGood : " << Good;
    cout << "\nAmazing : " << Amazing;
    cout << "\nExcellent : " << Excellent << endl;

    // check comments given by customers
    std::cout << "\nCustomer Comments:" << std::endl;

    for (int i = 0; i < commentCount; i++) {
        std::cout << "Comment " << (i + 1) << ": " << comments[i] << std::endl;
    }
}

// customers can give review from 1 - 5 stars to the restaurant
void feedback()
{
    cout << "\n Would you like to rate our restaurant?(Y = Yes)(Others = No) : ";
    cin >> rate;
    // Return message for every review given by customers
    if (rate == 'Y' || rate == 'y')
    {
        cout << "\nRate 1-5 : ";
        cin >> rating;

        if (rating == 1)
        {
            cout << "\nWe're truly sorry to hear about your experience. Please reach out to our customer support so we can address your concerns and improve.";
            Verybad += 1;
        }

        else if (rating == 2)
        {
            cout << "\nWe appreciate your feedback, and we're sorry to hear that your experience wasn't up to our usual standards. Your comments help us work towards making things better.";
            Bad += 1;
        }

        else if (rating == 3)
        {
            cout << "\nThank you for your review. We're glad you had an okay experience, but we're always striving to do better. Your suggestions would be valuable.";
            Good += 1;
        }

        else if (rating == 4)
        {
            cout << "\nThank you for the positive review! We're delighted to hear you had a great time at our restaurant.";
            Amazing += 1;
        }

        else if (rating == 5)
        {
            cout << "\nWow, thank you for the glowing review! We're thrilled you had an excellent experience at our restaurant. We hope to continue serving you with the same level of satisfaction in the future.";
            Excellent += 1;
        }

        else
        {
            return feedback();
        }
    }

    else
    {
       
    }
}

// customers can give comments to the restaurant
void comment()
{
    cout << "\nDo you have any comments for us? (Y == yes | Other == Exit): ";
    char response;
    cin >> response;
    cin.ignore();

    if (response == 'Y' || response == 'y') 
    {
        string com;
        cout << "\nEnter your comment: ";
        getline(cin, com);
        comments[commentCount] = com;
        commentCount++;
    }

    else
    {
        cout << " Thank You !";
    }
}

int main()
{
    customer++;
    printLogo();
    mealCharges = 0;
    checkquantityN = 0;
    checkquantityC = 0;
    checkquantityM = 0;
    checkquantityH = 0;
    checkquantityF = 0;

    // welcoming message
    cout << "\n\tWelcome to H&S Restaurant !!! You are customer : " << customer << "\n\tPlease take a look with our menu.\n";
    menu();
    cout << "\n\tFeel free to use the character on the menu to place your food order, whether in lowercase or uppercase.\n\tIf you'd like to cancel your order, simply press 'X'.\n\tIf you'd like to exit, simply press 'Z'" << endl;
    selection();
    bill();
    payment();
    feedback();
    comment();
    
    char choices;
    cout << "\n\n Next customer (Y=yes or Others=no) :";
    cin >> choices;

    // If yes , will change to next customers.
    if (choices == 'Y' || choices == 'y')
    {
        return main();
    }

    // if no, it will show up daily report
    else 
    {
        report();
        return 0;
    }
}