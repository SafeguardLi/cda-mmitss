#pragma once
#include <iostream>
#include <iomanip>
#include <chrono>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::showpoint;
using std::setprecision;

class TransceiverEncoder
{
    private:
        int messageType{};
        int bsmMsgCount{};
        int srmMsgCount{};
        int ssmMsgCount{};
        int mapMsgCount{};
        int spatMsgCount{};
        int msgSentTime{};
        double timeInterval{0.0};
        std::string applicationPlatform{};
        std::string intersectionName{};

    public:
        TransceiverEncoder();
        ~TransceiverEncoder();
        
        int getMessageType(std::string jsonString);
        //std::string BSMEncoder(std::string jsonString);
        std::vector<uint8_t> SRMEncoder(std::string jsonString);
        std::vector<uint8_t> SPaTEncoder(std::string jsonString);
        std::vector<uint8_t> SSMEncoder(std::string jsonString);
        std::string createJsonStringForSystemPerformanceDataLog(std::string msgCountType);
        std::string getApplicationPlatform();
        bool sendSystemPerformanceDataLog();
        void setMapMsgCount(int msgCount);  
};