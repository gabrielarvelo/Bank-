/*
 * CAccount.cpp
 *
 *  Created on: Apr 6, 2018
 *      Author: csaenz
 */
#include "CAccount.h"
#include "CCustomers.h"
int CAccount::m_base=123455;


  CAccount::CAccount(CCustomers* cust, int amount)
{
	    m_amount=amount;
		m_base++;
		m_accountNumber=m_base;
		m_customer=cust;
		//m_customer->print();
		//cout<<" account number: "<<m_accountNumber<<endl;
}

int CAccount::getAccountNumber(CAccount account)
{
	return m_accountNumber;
}

CAccount::~CAccount()
{
	// TODO Auto-generated destructor stub
}

bool CAccount::operator <(const CAccount& rhs) const
{
	 return m_accountNumber < rhs.m_accountNumber;
}

void CAccount::print() const
{
	cout<<m_accountNumber;
	cout<<" ";
	m_customer->print();
	cout<<" "<<m_amount<<" $ "<<endl;
}

const CCustomers CAccount::getAccountCustomer(CAccount  account)
{
	return *m_customer;
}
