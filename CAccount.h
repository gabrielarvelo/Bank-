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
	 CCustomers* m_customer;
	 int m_amount;
	 static int m_base;
	 int m_accountNumber;


    /**@link aggregationByValue*/
    //Ctransaction lnkCtransaction;

public:
	 bool deleted;
	CAccount(CCustomers* cust=NULL, int amount=0);
	 bool operator<(const CAccount&  rhs) const;
	 void erase();
	 void print()const;
	 int getAccountNumber(CAccount account);
	 const CCustomers getAccountCustomer(CAccount account);

	~CAccount();
};


#endif /* CACCOUNTDB_H_ */
