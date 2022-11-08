#include"CommandDeleteShow.h"
#include"CommunicationManager.h"

CCommandDeleteShow::CCommandDeleteShow(CCommunicationManager* commManager, const string& id):m_commManager(commManager), m_showID(id)
{
}
int CCommandDeleteShow::execute()
{

    int result = -1;
    if (0 != m_commManager)
    {
        result = m_commManager->deleteShow(m_showID);
    }
    return result;
}
