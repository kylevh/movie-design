/* Controller header file
 *
 * Contains all the necessary headers and variables for the Controller class.
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include <vector>
#include "Customer.h"
#include "MediaFactory.h"
#include "MediaStorage.h"

class Controller {
    public:
        static Controller* getInstance();
        ~Controller();
        void main();
    private:
        Controller();
        static Controller* instance; // Singleton instance
        std::vector<Customer> customers;
        MediaFactory mediaFactory;
        MediaStorage mediaStorage;
};