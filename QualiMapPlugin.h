#ifndef QUALIMAPPLUGIN_H
#define QUALIMAPPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class QualiMapPlugin : public Plugin
{
public: 
 std::string toString() {return "QualiMap";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
