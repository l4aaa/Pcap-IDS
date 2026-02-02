#include <iostream>
#include "PcapLiveDeviceList.h"
#include <vector>

int main() {
    const std::vector<pcpp::PcapLiveDevice*>& devList = pcpp::PcapLiveDeviceList::getInstance().getPcapLiveDevicesList();
    std::cout << "Available Network Devices:" << std::endl;
    for (const auto& dev : devList) {
        std::cout << " - " << dev->getName() << ": " << dev->getDesc() << std::endl;
    }
    return 0;
}