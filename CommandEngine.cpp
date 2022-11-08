#include"CommandEngine.h"
#include"CommandInterface.h"
#include"CommunicationManager.h"
#include"CommandAddShow.h"
#include"CommandDeleteShow.h"

CCommandEngine::CCommandEngine(CCommunicationManager *commManager) : m_commManager(commManager)
{

}
CCommandEngine::~CCommandEngine()
{
}
void CCommandEngine::addShow(const string &showID)
{
    addCommand(new CCommandAddShow(m_commManager, showID));

}
void CCommandEngine::deleteShow(const string& showID)
{
    addCommand(new CCommandDeleteShow(m_commManager, showID));
}
void  CCommandEngine::addCommand(ICommandInterface* command)
{
    m_commandQueue.push(command);

}
void  CCommandEngine::executeCommand()
{
    int res = -1;
    while (!m_commandQueue.empty()) {
        ICommandInterface* command = m_commandQueue.front();
        res = command->execute();
        if (res != 1)
            cout << "command not executed successfully\n";
        m_commandQueue.pop();
        delete command;
    }
}