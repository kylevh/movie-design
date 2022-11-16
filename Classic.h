/* Classic header file
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include "MovieDVD.h"
#include <string>

class Classic : public MovieDVD {
    public:
        Classic();
        Classic(int stock, std::string director, std::string title, int year);
        virtual ~Classic();
        virtual void constructor();
        virtual std::string info();
        virtual int addStock();
        virtual int getStock();

    private:
        std::string title;
        std::string director;
        int year;
};