/**
* \file CVMaker.h
 * \brief functions to generate the CV of the user
*/

#ifndef CVMAKER_H_
#define CVMAKER_H_
#include <array>
#include <string>

namespace cvmaker {
    class CVMaker {
    public:
        CVMaker();
        void getCV();
        void postInfos();

    private:
        std::string firstName, lastName;
    };

}

#endif // CVMAKER_H_