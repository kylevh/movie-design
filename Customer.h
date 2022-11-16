/* Customer header file
 *
 * Contains all the necessary headers and variables for the Customer class.
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include <string>
#include <iostream>
#include <vector>

class Customer {
    public:
        int getID();
        std::string getName();
        std::vector<std::string> getHistory();
    private:
        int id;
        std::string name;
        std::vector<std::string> history;
};