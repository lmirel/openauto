#pragma once

#include <QBluetoothAddress>
#include "OpenautoLog.hpp"
#include "btservice/AndroidBluetoothService.hpp"
#include "btservice/AndroidBluetoothServer.hpp"
#include "openauto/Configuration/Configuration.hpp"
namespace openauto{

namespace btservice{

class btservice{
    public:
        btservice(openauto::configuration::IConfiguration::Pointer config);
    private:
        const uint16_t servicePortNumber = 22;
        openauto::btservice::AndroidBluetoothServer androidBluetoothServer;
        openauto::btservice::AndroidBluetoothService androidBluetoothService;

};

}
}