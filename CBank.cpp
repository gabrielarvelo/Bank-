/*
 * CBank.cpp
 *
 *  Created on: Apr 6, 2018
 *      Author: csaenz
 */
#include "CBank.h"

CBank::CBank(unsigned int maxcustomers,unsigned  int transaction,unsigned int account){
	m_maxcustomers=maxcustomers;
	m_maxtransaction=transaction;
	m_maxaccount=account;
}

void CBank::print()const
{   cout<<"================DATA BANK=========================================================="<<endl;
	cout<<"Maximum Number of clients remainder:  "<<m_maxcustomers-m_customers.size()<<endl; // less the number of clients is missing
	cout<<"Maximum number of transactions  "<<m_maxtransaction<<endl;
	cout<<"Maximum number of accounts  "<<m_maxaccount-m_account.size()<<endl;
	cout<<"Bank Customers..."<<endl;

	//printing customers
	printCustomers();
//	std::set<CCustomers>::iterator it = m_customers.begin();
//		while (it != m_customers.end())// Iterate till the end of set
//		{
//			cout<<"  "<<&(*it)<<endl;
//			it->print();
//			it++;
//			cout<<"   "<<endl;
//			}
	//printing Accounts
		cout<<"Bank Accounts..."<<endl;
		printaccounts();
		cout<<"Bank Transactions..."<<endl;
		cout<<"=========================================================================="<<endl;
}

int CBank::getmaxclient()
{
	return m_maxcustomers;
}

void CBank::addClient(CCustomers* cust)
{
	 if (m_customers.size()==m_maxcustomers){
     	cout<<"WARNING: the maximum number of customers have been reached. More clients cannot be added"<<endl;

	 }else {
	 cout << "Adding Client ";
	 cust->print();
	 cout<<"  "<<endl;
//	 cout<<"address  "<<cust<<endl;
	      m_customers.insert(*cust);

     }

}


CCustomers*  CBank::getpointertoCustomers(CCustomers cust)
{	if(m_customers.find(cust)!=m_customers.end()){
	CCustomers a=*m_customers.find(cust);
	cout<<"Client ";
	a.print();
			cout<<" found!"<<endl;
	return &a;
	}	else
	{	cout <<endl;
		cout<<"Client ";
		cust.print();
		cout << " not found! "<<endl;
			}return 0;
}

void CBank::addAccount(CCustomers* cust, int amount)
{
	if(m_customers.find(*cust)!=m_customers.end()){
		 if (m_account.size()==m_maxaccount){
			     	cout<<"WARNING: the maximum number of accounts have been reached. More accounts cannot be created"<<endl;

				 }else {
				 cout << "Creating account ";
				 CAccount account(cust, amount);
			     m_account.insert(account);
			     account.print();//print all data of the account
			     }

 }else {
	 	 	 	 cout<<"ERROR: Generating Account - Customer <";
	 	 	 	 cust->print();
	 	 	 	 cout <<"> not found!"<<endl;
 }

}


void CBank::deleteAccount(int accountNumber)
{
	CAccount temp_account;
	cout<<"Deleting Account : "<< accountNumber <<endl;
	int m_accountNumber=accountNumber;

	std::set<CAccount>::iterator it;
	temp_account=getAccountbynumber(m_accountNumber);

	it=m_account.find(temp_account);
	if(it!=m_account.end()){
	m_account.erase(it);
	temp_account=*it;
	temp_account.erase();
	m_account.insert(temp_account);

	} else {
		cout<<"this account does not exist "<<endl;
	}


}

void CBank::printaccounts()const
{       std::set<CAccount>::iterator ite = m_account.begin();
		//printing accounts
		while (ite != m_account.end())
				{
				ite->print();
				//cout<<&(*ite)<<endl;
				ite++;
				}
}

void CBank::printCustomers()const
{
	std::set<CCustomers>::iterator it = m_customers.begin();
			while (it != m_customers.end())// Iterate till the end of set
			{
				it->print();
				//cout<<"  "<<&(*it)<<endl;
				it++;
				cout<<"   "<<endl;
				}
}

CAccount CBank::getAccountbynumber(int accountNumber)
{
	std::set<CAccount>::iterator ite;

	for (ite = m_account.begin(); ite!=m_account.end(); ite++)
	{
		CAccount a=*ite;
		int number=a.getAccountNumber(a);
		if(accountNumber==number){
		return a;
		}
	}
	CAccount b;
	return b;
}

CAccount CBank::getAccountbycustomer(CCustomers* cust)
{
	std::set<CAccount>::iterator ite;

		for (ite = m_account.begin(); ite!=m_account.end(); ite++)
		{
			CAccount a=*ite;
			CCustomers tempcustomer=a.getAccountCustomer(a);
			if(cust->getCustomerName()==tempcustomer.getCustomerName()){
			return a;
		}
		}
		CAccount b;

		return b;
}

void CBank::deleteCustomer(CCustomers* cust)
{
	string z = cust->getCustomerName();
	int x = this->getNumCustomersAccount(*cust);
	cout << "******************************************Deleting Customer: "
			<< z;
	cout << " Who owned " << x << " accounts" << endl;
	std::set<CCustomers>::iterator it;
	it = m_customers.find(*cust);
	if (it != m_customers.end())
	{
		m_customers.erase(it);
		//cout<<"puntero "<<cust<<endl;
		cust->erase();
		//cust->print();
		m_customers.insert(*cust);
		//delete account having the name of the client
		std::vector<int>::iterator iter;
		for (iter = myvector.begin(); iter != myvector.end(); ++iter)
		{
			this->deleteAccount(*iter);
		};

	}
	else
	{
		cout << "this customer does not exist " << endl;
	}

}

int CBank::getNumCustomersAccount(CCustomers cust)
{
	int count=0;
	std::set<CAccount>::iterator ite;

		for (ite = m_account.begin(); ite!=m_account.end(); ite++)
		{
			CAccount a=*ite;
			CCustomers Customer=a.getAccountCustomer(a);
			if(cust.getCustomerName()==Customer.getCustomerName()){
				count++;
				myvector.push_back(a.getAccountNumber(a));
			}
		}return count;
}

CBank::~CBank()
{
	// TODO Auto-generated destructor stub
}

