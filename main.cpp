#include"CommandEngine.h"
#include"CommunicationManager.h"

int main()
{
	CCommunicationManager* commManager = new CCommunicationManager();

	CCommandEngine* commandEngine = new CCommandEngine(commManager);

	commandEngine->addShow("Show_1234");
	commandEngine->deleteShow("Show_New");

	commandEngine->executeCommand();
	
	return 0;
}