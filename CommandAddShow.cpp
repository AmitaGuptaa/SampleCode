#include"CommandAddShow.h"
#include"CommunicationManager.h"

CCommandAddShow::CCommandAddShow(CCommunicationManager* commManager, const string& id) :m_commManager(commManager), m_showID(id)
{
}
int CCommandAddShow::execute()
{
    int result = -1;
    if (0 != m_commManager)
    {
        result = m_commManager->addShow(m_showID);
    }
    return result;
}
