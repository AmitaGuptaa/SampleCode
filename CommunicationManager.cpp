#include"CommunicationManager.h"

CCommunicationManager::CCommunicationManager()
{
	//connect to server
}
CCommunicationManager::~CCommunicationManager()
{
	//Disconnect to server
}
int CCommunicationManager::addShow(const string &showName)
{
	cout << "Added show is : " << showName<<"\n";
	//prepare addshow packet and send to server
	return 1;
}
int CCommunicationManager::deleteShow(const string& showName)
{
	cout << "Deleted show is : "<< showName << "\n";
	//prepare deleteshow packet and send to server
	return 0;

}
