#include <iostream>

struct User                        // By default public. Can use Private: to make value private
{
    std::string first_name;        // Structs mostly to save data
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
    private:
    std::string status = "Plat";

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

