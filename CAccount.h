/*
 * CAccount.h
 *
 *  Created on: Apr 6, 2018
 *      Author: csaenz
 */
#ifndef CACCOUNT_H_
#define CACCOUNT_H_

#include <string>
#include <map>
#include <iostream>
#include "CCustomers.h"
using namespace std;

class CAccount
{
private:
     /**
      * @link association 
      */
	 CCustomers m_customer;
	 int m_amount;
	 static int m_base;
	 int m_accountNumber;

    /**@link aggregationByValue*/
    //Ctransaction lnkCtransaction;

public:

	CAccount();
	CAccount(CCustomers cust, int amount);
	 bool operator<(const CAccount&  rhs) const;
	 void print();
	 int getAccountNumber(CAccount account);
	 CCustomers getAccountCustomer(CAccount account);

	~CAccount();
};


#endif /* CACCOUNTDB_H_ */
