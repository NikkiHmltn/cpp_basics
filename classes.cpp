#include <iostream>
#include <string>
using namespace std;

class Restaurant{
    public: //User can interact with this part
        void SetName(string restaurantName); //Calls SetName function 
        void SetRating(int userRating);
        void Print();
    
    private: // only functions named above seem to have access to this, not users.
        string name;
        int rating;

};
// use "::" to attach the Class to the Function
//  "::" is called a "scope resolution operator"
void Restaurant::SetName(string restaurantName){
    name = restaurantName;
}

void Restaurant::SetRating(int userRating){
    rating = userRating;
}

void Restaurant::Print(){
    cout << name << " -- " << rating << endl;
}

// main runs the public functions
int main() {
   Restaurant favLunchPlace;
   Restaurant favDinnerPlace;
   
   favLunchPlace.SetName("Central Deli");
   favLunchPlace.SetRating(4);
   
   favDinnerPlace.SetName("Friends Cafe");
   favDinnerPlace.SetRating(5);
   
   cout << "My favorite restaurants: " << endl;
   favLunchPlace.Print();
   favDinnerPlace.Print();
   
   return 0;
}