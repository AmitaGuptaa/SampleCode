#pragma once
/**
 * This class is responsable for creating commands.
 *
 */
#include<iostream>
#include<Queue>

using namespace std;

class ICommandInterface;
class CCommunicationManager;

typedef queue<ICommandInterface*> CommandQueue;

class CCommandEngine
{
public:

    /**
     * C'tor
     */
    explicit CCommandEngine(CCommunicationManager *commManager);

    /**
     * D'tor
     */
    ~CCommandEngine();

    void addShow(const string& showID);
    void deleteShow(const string& showID);
    /**
    * Retreive command from list and executes them
    * command : command to be added
    */
    void executeCommand();
private:
     /**
     * addcommands to the queue
     * command : command to be added
     */
    void addCommand(ICommandInterface* command);

private:
    CommandQueue m_commandQueue;    //command list
    CCommunicationManager  *m_commManager;

};