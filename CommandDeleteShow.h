#pragma once
/**
 *  This is a command implementation class to generate a command to delete Show from the server
 *
 */

#include<iostream>
#include "CommandInterface.h"

class CCommunicationManager;

using namespace std;

class CCommandDeleteShow : public ICommandInterface
{
    CCommunicationManager* m_commManager;
    string m_showID;
public:
    CCommandDeleteShow(CCommunicationManager* commManager, const string &id);
    int execute();
};
