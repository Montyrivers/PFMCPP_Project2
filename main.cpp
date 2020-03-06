#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
int
float
bool
double
char
unsigned int
auto
void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function



 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int digit = 4;
    int prime = 3;
    float dxSeven = 11.f;
    float dxSevenII = 16.f;
    float exFive = 20.f;
    bool yes = true;
    bool no = false; 
    bool zero = false;
    double dNumber = 2.0;
    double dThree = 3.0;
    double dValue = 5.0;
    char m = 'm';
    char f = 'f';
    char h = 'h';
    unsigned int a = 0;
    unsigned int b = 2;
    unsigned int c = 5;
    auto string = "here is a string";
    auto integer = 7;
    auto floatingNumber = 7.5f;

    
    
    ignoreUnused(number, digit, prime, dxSeven, dxSevenII, exFive, yes, no, zero, dNumber, dThree, dValue, m, f, h, a, b, c, string, integer, floatingNumber); //passing each variable declared to the ignoreUnused() function
    
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool enableDevice(int deviceSelection = 0, bool enableDisable = true)
{
    ignoreUnused(deviceSelection, enableDisable);
    return{};
}
/*
 2)
 */
float setLowPass(bool twentyFourDB = false, float cutoffFrequency = 250.00f, int resonance = 0)
{
    ignoreUnused(twentyFourDB, cutoffFrequency, resonance);
    return {};
}
/*
 3)
 */
int comparePreset(int presetNumber)
{
    ignoreUnused(presetNumber);
    return{};
}

/*
 4)
 */
 double randomNumberBetween(double dFromLow, double dToHigh )
 {
    ignoreUnused(dFromLow, dToHigh);
    return{};
 }

/*
 5)
 */
int planDinnerParty(int amountOfGuests, int whatToMake = 0, bool giveUpAndOrderPizza = false)
{
    ignoreUnused(amountOfGuests, whatToMake, giveUpAndOrderPizza);
    return {};
}

/*
 6)
 */
bool adoptACat(int catAge, int catBreed, bool fosterOrPermanent)
{
    ignoreUnused(catAge, catBreed, fosterOrPermanent);
    return{};
}

/*
 7)
 */
char z(char a, char b, char c)
{
    ignoreUnused(a,b,c);
    return{};
} 

/*
 8)
 */
int buildTeam(int amountTeammates, int whatSport)
{
    ignoreUnused(amountTeammates, whatSport);
    return{};
}
/*
 9)
 */
bool searchAlphaNumeric(char letter, int number)
{
    ignoreUnused(letter, number);
    return{};
}
/*
 10)
 */
int setLocalTimeUS(int timeZone, bool DST)
{
    ignoreUnused(timeZone, DST);
    return{};
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto savedDeviceStatus = enableDevice(3,true);
    //2)
    auto adjustedLowpass = setLowPass(true, 4000.f, 0);
    //3)
    auto compareToEditBuffer = comparePreset(4);
    
    //4)
    auto setNumberRange = randomNumberBetween(350.00, 450000.00);
    //5)
    auto weOrderedPizza = planDinnerParty(4, 3, true);
    //6)
    auto foreverHomeCat = adoptACat(1,4,false);
    //7)
    auto wasCurious = z('d','k','j');
    
    //8)
    auto footBallTeam = buildTeam(11, 3);
    
    //9)
    auto beeSeven = searchAlphaNumeric('b',7);
    
    //10)
    auto easternDSTOff = setLocalTimeUS(2,false);
    
    ignoreUnused(carRented, savedDeviceStatus, adjustedLowpass, compareToEditBuffer, setNumberRange, weOrderedPizza, foreverHomeCat, wasCurious, footBallTeam, beeSeven, easternDSTOff );
    std::cout << "good to go!" << std::endl;
    return 0;    
}
