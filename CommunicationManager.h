#pragma once
#include<iostream>
#include<vector>

using namespace std;
/**
 * This is a class for remote communication to the server.
 */

class CCommunicationManager
{
public:
    /**
    * @brief Constructor
    */
    CCommunicationManager();
    /**
    * @brief Destructor
    */
    ~CCommunicationManager();
    /**
    * @brief addShow
    * @param showDetailedInfo
    * @return
    */
    int addShow(const string& showName);

    /**
    * @brief deleteShow
    * @param id
    * @return
    */
    int deleteShow(const string& showName);

    /**
    * @brief sendData
    * @param id
    * @return
    */
    int sendData();
};