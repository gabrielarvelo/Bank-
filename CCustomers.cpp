/*
 * CCustomers.cpp
 *
 *  Created on: Apr 8, 2018
 *      Author: csaenz
 */

#include "CCustomers.h"
#include "CAccount.h"


/*CCustomers::CCustomers()
{

}*/
CCustomers::CCustomers(string name)
{
	m_name=name;
	deleted=false;
//	cout<<m_name<<" Customers in the address: "<<this<<endl;
//	cout<<"attribute address  "<<&m_name<<endl;
}

CCustomers::CCustomers(const CCustomers& c)
{
	m_name=c.m_name;
	deleted=c.deleted;
//	cout<<m_name<<" copy Customers in the address: "<<this<<endl;
//	cout<<"attribute address  "<<&m_name<<endl;
}

bool CCustomers::operator <(const CCustomers& rhs) const
{
       return m_name < rhs.m_name;
}

void CCustomers::erase()
{
deleted=true;
//cout<<"borre cliente "<<this<<endl;

}

CCustomers::~CCustomers()
{
//	cout<<" destroying "<<m_name<<" customer in the address "<<this<<endl;
	// TODO Auto-generated destructor stub
}

void CCustomers::print() const
{   if(deleted==true){
	cout<<"Found deleted customer ";
	//<<this;
} else{
	cout<<m_name<< " ";
	//<<this;
}
}

string CCustomers::getCustomerName()
{
	return m_name;
}
