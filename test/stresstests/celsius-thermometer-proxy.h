
/*
 * This file was automatically generated by sdbuscpp-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__celsius_thermometer_proxy_h__proxy__H__
#define __sdbuscpp__celsius_thermometer_proxy_h__proxy__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace sdbuscpp {
namespace stresstest {
namespace celsius {

class thermometer_proxy
{
public:
    static constexpr const char* interfaceName = "org.sdbuscpp.stresstests.celsius.thermometer";

protected:
    thermometer_proxy(sdbus::IObjectProxy& object)
        : object_(object)
    {
    }

public:
    uint32_t getCurrentTemperature()
    {
        uint32_t result;
        object_.callMethod("getCurrentTemperature").onInterface(interfaceName).storeResultsTo(result);
        return result;
    }

private:
    sdbus::IObjectProxy& object_;
};

}}}} // namespaces

#endif
