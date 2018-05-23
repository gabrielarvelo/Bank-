/*
 * CCustomers.h
 *
 *  Created on: Apr 8, 2018
 *      Author: csaenz
 */
#ifndef CCUSTOMERS_H_
#define CCUSTOMERS_H_

#include <string>
#include <iostream>

using namespace std;

class CCustomers
{
private:

    string m_name;
    bool deleted;
  //  CAccount * lnkCAccount;
public:

    CCustomers();
	CCustomers(string name="");
	CCustomers(const CCustomers& c );
	void erase();
	string getCustomerName();
	void print() const;
	bool operator<(const CCustomers&  rhs) const;

    ~CCustomers();

};

#endif /* CCUSTOMERS_H_ */
