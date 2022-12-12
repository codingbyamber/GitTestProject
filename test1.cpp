// ===============================================================
// File: HW_1a.cpp
// ===============================================================
// Programmer: Amber Fernandez
// Class: CMPR 121
// ===============================================================
 
#include <iostream>   
#include <string>
#include <iomanip>
 
using namespace std;
 
// GLOBAL VARIABLES
 
// FUNCTION PROTOTYPES
 
float getSalesAmt ();
float calcCommission (float sales_amount);
float calcPay (float commission);
void displayPay (float sales_amount, float commission, float monthly_pay);
void exitFunction ();
 
// ==== main =====================================================
//
// ===============================================================
int main()
{
   float   sales_amount = float();
   float   commission = float();
   float   monthly_pay = float();
   char again = char(); 
 
   do
   {
       sales_amount  =  getSalesAmt();
       commission  =  calcCommission(sales_amount);
       monthly_pay = calcPay(commission);
       displayPay(sales_amount, commission, monthly_pay);
      
       //CALCULATE AGAIN?
       cout << endl;
       cout << "Would you like to do it again? (Y/N or y/n)" << endl;
       cin >> again;
             
   }
      
       while ( again == 'y' || again == 'Y' );
       {
           void exitFunction();
       }
 
}              
// end of main()
// ==============================================================
 
// FUNCTIONS
//
// ==== getSalesAmt ==============================================
//    This function gets the user's monthly sales amount.
//
// Output:
//      A float value, representing the user's monthly sales.
// ===============================================================
float getSalesAmt()
{
   float   sales_amount = float();
   float   commission = float();
   float   monthly_pay = float();
   char again = char();
 
   cout << "Enter your monthly sales amount: $";
 
   cin >> sales_amount;
 
   cout << endl;
 
   return sales_amount;
 
} // end of getSalesAmt()
// ===================================================================
 
// ==== calcCommission ===============================================
// This function calculates the user's commission based on the
// sales amount
//
// Input:
//      A float value, representing the sales amount
// Output:
//      A float value, representing the user's commission
// ===============================================================
float calcCommission(float sales_amount)
{
   float   commission = float();
   float   monthly_pay = float();
   char again = char();
 
   if (sales_amount >= 50000)
               {
                   commission = sales_amount * 0.02;
                }
 
   if (sales_amount <= 50000 && sales_amount >= 25000)
               {
                   commission = sales_amount * 0.015;
               }
 
   else if (sales_amount < 25000)
                {
                   commission = 0;
                }
 
   return commission;
 
} // end of calcCommission()
// ===============================================================
 
// ==== calcPay ==================================================
// This function adds the user's base pay to their commission.
//
// Inputs:
//      commission - a float value
// Outputs:
//      monthly_pay - monthly salary plus commission
//
// ===============================================================
float calcPay (float commission)
{
   float   monthly_pay = float();
   char again = char();
 
   monthly_pay = commission + 2500;
 
   return monthly_pay;
 
} // end of calcPay()
// ===============================================================
 
// ==== displayPay ===============================================
//    This function displays the user's monthly pay, sales,
//    commission, base pay, and total pay.
//
// Inputs:
//      sales_amount - one float value
//      commission - one float value
//      total pay - one float value
// Output:
//      Sentence stating user's monthly pay, sales,
//      commission, base pay, and total pay
// ===============================================================
void displayPay (float sales_amount, float commission, float monthly_pay)
{
 
   //monthly sales
   cout << fixed << setprecision(2); //round 2 decimals
   cout << setw(15) << left << "Monthly Sales:" ;
   cout << setw(10) << right << "$" << setw(9) << right << sales_amount << endl;
 
   //commission
   cout << fixed << setprecision(2); //round 2 decimals
   cout << setw(15) << left << "Commission:" ;
   cout << setw(10) << right << "$" << setw(9) << right << commission << endl;
 
   //base pay
   cout << fixed << setprecision(2); //round 2 decimals
   cout << setw(15) << left << "Base Pay:" ;
   cout << setw(10) << right << "$" << setw(9) << right << "2500.00" << endl;
 
   //total pay
   cout << fixed << setprecision(2); //round 2 decimals
   cout << setw(15) << left << "Total Pay:" ;
   cout << setw(10) << right << "$" << setw(9) << right << monthly_pay << endl;
 
}  // end of displayPay()
// ===============================================================
 
// ==== exitFunction =============================================
//   This function terminates the program.
// ===============================================================
void exitFunction()
{
   exit(0);
}
// end of exitFunction()
// ===============================================================
 
/* ===============================================================
Output
Enter your monthly sales amount: $10000
Monthly Sales:          $ 10000.00
Commission:             $     0.00
Base Pay:               $  2500.00
Total Pay:              $  2500.00
Do it again? (Y/N)
y
Enter your monthly sales amount: $28000
Monthly Sales:          $ 28000.00
Commission:             $   420.00
Base Pay:               $  2500.00
Total Pay:              $  2920.00
Do it again? (Y/N)
y
Enter your monthly sales amount: $56000
Monthly Sales:          $ 56000.00
Commission:             $  1120.00
Base Pay:               $  2500.00
Total Pay:              $  3620.00
Do it again? (Y/N)
n
==============================================================*/
// File: HW_1b.cpp
// ===============================================================
// Programmer: Amber Fernandez
// Class: CMPR 121
// ===============================================================
/* 
#include <iostream>   
#include <string>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
// GLOBAL VARIABLES
 
// FUNCTION PROTOTYPES
 
void getTemps ();
float calcAvg (float, float, float);
void displayAvg (float);
void exitFunction ();
 
// ==== main =====================================================
//
// ===============================================================
int main()
{
 
   float   city_1 = float();
   float   city_2 = float();
   float   city_3 = float();
   float   avg_temp = float();
 
       getTemps();
       //displayAvg (avg_temp);
      
}              
// end of main()
// ==============================================================
 
// FUNCTIONS
//
// ==== getTemps ==============================================
// This function gets the 3 temperatures from the user.
//
// Input:
//      temp_1 - a float value
//      temp_2 - a float value
//      temp_3 - a float value
// ===============================================================
void getTemps()
{
   float   city_1 = float();
   float   city_2 = float();
   float   city_3 = float();
   float   avg_temp = float();
 
   cout << "Enter the temperatures of 3 cities:" << endl;
   cout << "#1:   ";
   cin >> city_1;
   cout << "#2:   ";
   cin >> city_2;
   cout << "#3:   ";
   cin >> city_3;
 
   avg_temp = calcAvg(city_1, city_2, city_3);
 
 
} // end of getTemps()
// ===================================================================
 
// ==== calcAvg ===============================================
// This function calculates the average of the 3 temps.
//
// Input:
//      3 float values, representing the cities temperatures
// Output:
//      A float value, representing the average temperature.
// ===============================================================
float calcAvg (float city_1, float city_2,float city_3)
{  
   float   avg_temp = float();
  
   avg_temp = (city_1 + city_2 + city_3) / 3;
   displayAvg(avg_temp);
 
 
   return avg_temp;
} // end of calcAvg()
// ===============================================================
 
// ==== displayAvg ===============================================
//    This function displays the average temperature.
//
// Inputs:
//      avg_temperature - one float value
//
// Output:
//      Sentence stating the average temperature.
// ===============================================================
void displayAvg(float avg_temp)
{
 
   cout << fixed << setprecision(2); //round 2 decimals
   cout << "The average temperature is ";
   cout << avg_temp ;
   cout << " degrees." << endl;
} // end of displayAvg
// ===============================================================
 
 ===============================================================
Output
Enter the temperatures of 3 cities:
#1:   100
#2:   24
#3:   65
The average temperature is 63.00 degrees.
==============================================================*/
