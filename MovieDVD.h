/* MovieDVD header file
 *
 * Contains all the necessary headers and variables for the MovieDVD class.
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include <string>

class MovieDVD {
    public:
        MovieDVD();
        virtual ~MovieDVD();
        virtual std::string info();
        virtual int addStock();
        virtual int getStock();
    private:
        std::string title;
        int release;
        std::string director;
};