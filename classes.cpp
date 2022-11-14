// #include <iostream>
// #include <string>
// using namespace std;

// class Restaurant{
//     public: //User can interact with this part
//         void SetName(string restaurantName); //Calls SetName function 
//         void SetRating(int userRating);
//         void Print();
    
//     private: // only functions named above seem to have access to this, not users.
//         string name;
//         int rating;

// };
// // use "::" to attach the Class to the Function
// //  "::" is called a "scope resolution operator"
// void Restaurant::SetName(string restaurantName){
//     name = restaurantName;
// }

// void Restaurant::SetRating(int userRating){
//     rating = userRating;
// }

// void Restaurant::Print(){
//     cout << name << " -- " << rating << endl;
// }

// // main runs the public functions
// int main() {
//    Restaurant favLunchPlace;
//    Restaurant favDinnerPlace;
   
//    favLunchPlace.SetName("Central Deli");
//    favLunchPlace.SetRating(4);
   
//    favDinnerPlace.SetName("Friends Cafe");
//    favDinnerPlace.SetRating(5);
   
//    cout << "My favorite restaurants: " << endl;
//    favLunchPlace.Print();
//    favDinnerPlace.Print();
   
//    return 0;
// }


// ============ MUTATORS/ACCESSORS ============ // 

class Restaurant {
   public:
      void   SetName(string restaurantName); // Mutator
      void   SetRating(int userRating);      // Mutator
      string GetName() const;                // Accessor
      int    GetRating() const;              // Accessor
      void   Print() const;                  // Accessor

   private:
      string name;
      int rating;
};

Restaurant::Restaurant() {  // Default constructor
   name = "NoName"; // Default name: NoName indicates name was not set
   rating = -1; // Default rating: -1 indicates rating was not set
}

void Restaurant::SetName(string restaurantName) {
   name = restaurantName;
}
// these are setters because no const, users can alter data
void Restaurant::SetRating(int userRating) {
   rating = userRating;
}

string Restaurant::GetName() const { //"Getter" because it has const after it so no one can alter the data
   return name;
}

int Restaurant::GetRating() const {
   return rating;
}

void Restaurant::Print() const {
   cout << name << " -- " << rating << endl;
}
