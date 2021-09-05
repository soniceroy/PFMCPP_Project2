#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 bool
 char
 int
 float
 double
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    // int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int amount = 10;
    int length = 40;
    int count = 50;
    bool isHappy = true;
    bool isOn = false;
    bool hasSupper = false;
    char ess = 's';
    char vee = 'v';
    char tee = 't';
    float oneAndABit = 1.03;
    float seven = 7.0;
    float eightAndAHalf = 8.5;
    double lotsOfDecimals = 0.00000000000349;
    double lessDecimals = 0.0000349;
    double zero = 0.0;

    
    // ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(
        amount,
        length,
        count,
        isHappy,
        isOn,
        hasSupper,
        ess,
        vee,
        tee,
        oneAndABit,
        seven,
        eightAndAHalf,
        lotsOfDecimals,
        lessDecimals,
        zero
    );
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
// bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
// { 
//     ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
//     return {}; //if your function returns something other than void, add 'return {};' at the end of it.
// } 

/*
 1)
 */
void sendSignal(int* signalArray, int signalArrayLength)
{
    ignoreUnused(signalArray, signalArrayLength);
}
/*
 2)
 */
char* changeFirstLetter(char* word, char newLetter)
{
    ignoreUnused(word, newLetter);
    return {};
}
/*
 3)
 */
int placePizzaOrder(int size, int* toppings)
{
  ignoreUnused(size, toppings);
  return {};
}
/*
 4)
 */
int getOrderStatus(int orderID)
{
    ignoreUnused(orderID);
    return {};
}
/*
 5)
 */
void playSound(int soundID, float duration)
{
    ignoreUnused(soundID, duration);
}
/*
 6)
 */
void launchProjectile(int distance, int projectileID)
{
    ignoreUnused(distance, projectileID);
}
/*
 7)
 */
void run(int speed)
{
    ignoreUnused(speed);
}
/*
 8)
 */
int createNote(char * text)
{
    ignoreUnused(text);
    return {};
}
/*
 9)
 */
void liftArm(float height)
{
    ignoreUnused(height);
}
/*
 10)
 */
void changeOrderStatus(int orderStatus, int orderID)
{
    ignoreUnused(orderStatus, orderID);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    // auto carRented = rentACar(6, 2); 
    
    //1)
    int signalArray[] = {1, 2, 3};
    sendSignal(signalArray, 3);
    //2)
    char dog[] = "dog";
    auto log = changeFirstLetter(dog, 'l');
    //3)
    int toppings[] = {1, 2, 3};
    auto orderID = placePizzaOrder(1, toppings);
    //4)
    auto orderStatus = getOrderStatus(orderID);
    //5)
    playSound(1, 1.1);
    //6)
    launchProjectile(40, 0);
    //7)
    run(100);
    //8)
    char text[] = "Hello World.";
    auto note = createNote(text);
    //9)
    liftArm(12.2);
    //10)
    changeOrderStatus(3, orderID);
    
    // ignoreUnused(carRented);
    ignoreUnused(
        signalArray,
        dog,
        log,
        toppings,
        orderID,
        orderStatus,
        text,
        note
    );
    std::cout << "good to go!" << std::endl;
    return 0;    
}
