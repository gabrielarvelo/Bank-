/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CTRANSACTION.H
* Author          :
* Description     :
*
*
****************************************************************************/
#include <string>
using namespace std;

#ifndef CTRANSACTION_H
#define CTRANSACTION_H
class Ctransaction {
private:
    string m_sender;
    string m_reciver;
public:

    Ctransaction();
    void withdraw();
    void transfer();
};



/********************
**  CLASS END
*********************/
#endif /* CTRANSACTION_H */
