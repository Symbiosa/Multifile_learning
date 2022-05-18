#include <iostream>
// Creating a struct
class User                        // By default public. Can use Private: to make value private
{   
    std::string status = "Plat";

    public:
        std::string first_name;        // Structs mostly to save data
        std::string last_name;
        std::string get_status()
        {
            return status;
        }


};                                 // Semicolon to end structs

int main()
{
    User user;
    user.first_name = "Niko";
    user.last_name = "Lampinen";
    //user.status = "4head";

    std::cout << user.first_name << "\t" << user.last_name << "\t" << user.get_status() << std::endl;
    return 0;
}

// Classes and objects
// Cookie cutter cuts cookies, Class produces objects. Instantiation
// Describing user with classes
// User (Class)
// User user1 (object)
// User user2 (object)
// User is a type.
// Types functionality defined by class

// User user1 = new User(); *Not how you do it in C++
// User user1 *Enough for C++ to create new user*
// User() ----> Method
// speak(), jump(), string name

// 5 == 5
// user1 == user2
//        ^
//        |
// Can be overloaded just like + operator


//Creating a class



