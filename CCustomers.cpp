/*
 * CCustomers.cpp
 *
 *  Created on: Apr 8, 2018
 *      Author: csaenz
 */

#include "CCustomers.h"
#include "CAccount.h"


CCustomers::CCustomers()
{

}
CCustomers::CCustomers(string name)
{
	m_name=name;
}

bool CCustomers::operator <(const CCustomers& rhs) const
{
       return m_name < rhs.m_name;
}


/*void CCustomers::addClient(string name,CBank & bank)
{
 	m_name=name;
		        if (m_nocustomets==bank.getmaxclient()){
		        	cout<<"WARNING: the maximum number of customers have been reached. this client cannot be added"<<endl;
		        } else
				{
		        	m_customesr.push_back(m_name);
		     	   ++m_nocustomets;
				}
}*/

/*bool CCustomers::lookCustomer(string name,CBank & bank)
{
	vector<string>::iterator ite= m_customesr.begin();
	for (ite=m_customesr.begin();ite!=m_customesr.end();ite++){
		if( *ite==name){
			return true;
		}
	}return false;
}*/

//CCustomers::~CCustomers()
//{
//	// TODO Auto-generated destructor stub
//}

void CCustomers::print()
{
	cout<<m_name;
}

string CCustomers::getCustomerName()
{
	return m_name;
}
/*void CCustomers::deleteCustomer(string name)
{

}*/
