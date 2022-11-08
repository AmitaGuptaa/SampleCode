#pragma once
/**
 *  This is a command implementation class to generate a command to add Show from the server
 *
 */

#include<iostream>
#include "CommandInterface.h"

class CCommunicationManager;
using namespace std;

class CCommandAddShow : public ICommandInterface
{
    CCommunicationManager* m_commManager;
    string m_showID;
public:
    CCommandAddShow(CCommunicationManager * commManager, const string & showID);
    int execute();
};
