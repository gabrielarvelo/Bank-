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
    int m_nocustomets=0;
    string m_name;
  //  CAccount * lnkCAccount;
public:

    CCustomers();
	CCustomers(string name="");
	string getCustomerName();
	void print() const;
	bool operator<(const CCustomers&  rhs) const;
//	void deleteCustomer(string name);

//    ~CCustomers();

};

#endif /* CCUSTOMERS_H_ */
