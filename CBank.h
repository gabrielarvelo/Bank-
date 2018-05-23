/*
 * CBank.h
 *
 *  Created on: Apr 6, 2018
 *      Author: csaenz
 */

#ifndef CBANK_H
#define CBANK_H

#include <set>
#include <vector>
#include <string>
#include <iostream>

#include "CAccount.h"
#include "CCustomers.h"

//#include "Ctransaction.h"

using namespace std;

class CBank{

private:

//max num of customers
unsigned int m_maxcustomers;
// max num of transaction
unsigned int m_maxtransaction;
// max num of account
unsigned int m_maxaccount;
// name of client
	string m_name;
    /**
     * @link aggregationByValue
     */
	std::set<CCustomers> m_customers;
	/**
     * @link aggregationByValue
     */
	std::set< CAccount> m_account;

    /**@link aggregationByValue*/
   // Ctransaction m_transaction;
	std::vector<int>myvector;
public:

	CBank(unsigned int maxcustomers=5000000,unsigned int transaction=10000000,unsigned int account=10000);
	void print()const;
	void printaccounts()const;
	void printCustomers()const;

    void addClient(CCustomers* cust);
    void addAccount(CCustomers* cust, int amount);
	void deleteAccount(int accountNumber);
	void deleteCustomer(CCustomers* cust);
	CAccount getAccountbynumber(int accountNumber);
	CAccount getAccountbycustomer(CCustomers* cust);
    /*	    string lookCustomer(string name);*/
	    int getmaxclient();
    int getNumCustomersAccount(CCustomers cust);
	    CCustomers* getpointertoCustomers(CCustomers cust);


	~CBank();
};

#endif /* CBANK_H_ */
