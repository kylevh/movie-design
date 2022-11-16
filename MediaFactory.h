/* MediaFactory header file
 *
 * Contains all the necessary headers and variables for the Customer class.
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include "MovieDVD.h";
#include <string>

class MediaFactory {
    public:
        std::string info;
        MediaFactory();
        ~MediaFactory();
        void run();
    private:
        MovieDVD CreateMovie();
        int hash();
        // void displayMenu();
        // void displayInventory();
        // void displayHistory();
        // void borrow();
        // void quit();
        // void invalid();

};
