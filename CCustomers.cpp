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
}

bool CCustomers::operator <(const CCustomers& rhs) const
{
       return m_name < rhs.m_name;
}



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

void CCustomers::print() const
{
	cout<<m_name;

}

string CCustomers::getCustomerName()
{
	return m_name;
}
