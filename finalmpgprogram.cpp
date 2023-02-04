// Priscilla Cook
// 03/05/22
// =============================================
// Asks/prompts the user for their first, middle
// initial, and last name, miles driven, and then
// gallons of gas used. Compute a car's miles per
// gallon given the input of miles driven and
// gallons of gas used (above). It should also
// convert (into metric) the: miles driven to
// kilometers driven gallons of gas used to liters
// used and miles per gallon to kilometers per liter.
// =============================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fName, lName, fullName;                                                  //Declare variables
    char mInitial;
    float milesDriven, gallonsUsed, kmDriven, litersUsed, mpg, kpl;
cout << "Please enter first name: " << endl;                              //Ask for user’s first name
getline(cin, fName) ;                                                    //User enters first name
cout << "Please enter middle initial (Enter space if none): " << endl;  //Ask for user’s middle initial
cin >> mInitial;                                           //User enters middle initial
cout << "Please enter last name: " << endl;               //Ask for user’s last name
cin >> lName;                                            //User enters last name
cout << "Enter miles driven: " << endl;                 //Ask for miles driven
cin >> milesDriven;                                    //User enters miles driven
kmDriven=milesDriven * 1.6;                           //Convert miles to kilometers
cout << "Enter gallons of gas used: " << endl;       //Ask for gallons of gas used
cin >> gallonsUsed;                                 //User enters gallons of gas used
litersUsed=gallonsUsed * 3.785;                    //Convert gallons to liters
fullName = fName + " " + mInitial + ". " + lName; //Concatenate full name
mpg = milesDriven/gallonsUsed;                   //Calculate miles per gallon (mpg)
kpl = kmDriven/litersUsed;                      //Calculate kilometers per liter (kpl)
cout << "Your name is: " << fullName << endl;  //Print user’s name
cout << "You have driven: " << milesDriven << " miles / " << kmDriven << " kilometers." << endl;    //Print miles/kilometers driven
cout << "You have used: " << gallonsUsed << " gallons / " << litersUsed << " liters." << endl;     //Print gallons/liters used
cout << "You get " << mpg << " miles per gallon / " << kpl << " kilometers per liter." << endl;   //Print mpg and kpl



    return 0;
}
