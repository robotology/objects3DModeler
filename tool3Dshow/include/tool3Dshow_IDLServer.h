// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_tool3Dshow_IDLServer
#define YARP_THRIFT_GENERATOR_tool3Dshow_IDLServer

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class tool3Dshow_IDLServer;


/**
 * tool3DShow_IDLServer Interface.
 */
class tool3Dshow_IDLServer : public yarp::os::Wire {
public:
  tool3Dshow_IDLServer();
  virtual bool showFileCloud(const std::string& cloudname);
  virtual std::string help_commands();
  virtual bool quit();
  virtual bool read(yarp::os::ConnectionReader& connection);
  virtual std::vector<std::string> help(const std::string& functionName="--all");
};

#endif

