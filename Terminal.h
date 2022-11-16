/* Terminal header file
 *
 * Contains all the necessary headers and variables for the Terminal interface.
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include <iostream>
#include <string>
#include <vector>
#include "Controller.h"

class Terminal : public Controller {
    public:
        Terminal();
        ~Terminal();
        void display();
    private:

};