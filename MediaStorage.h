/* MediaStorage header file
 *
 * Contains all the necessary headers and variables for the MediaStorage class.
 *
 * By: Group 1 (Kevin Carlson, Louie Escalera, Joshua Hancock, Kyle Huynh)
 * Date: 11/15/2022
 * 
 * CSS 343 Afra Mashhadi
*/
#include <vector>
#include "MovieDVD.h"

class MediaStorage {
    public:
        MediaStorage();
        ~MediaStorage();
        void addMedia();
        void removeMedia();
        void displayMedia();
        
    private:
        std::vector<MovieDVD> media;
        void displayInventory();
};