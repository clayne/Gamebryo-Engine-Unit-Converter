//#include "sys.h"
#include <INI.hpp>
#include <opt.hpp>

#include "build-cfg.hpp"

[]() -> void {}()
INI ini("def.ini");
Config cfg(ini);

#include "interpret.hpp"

int main(const int argc, char* argv[])
{
	opt::list args(argc, argv, "");
	// interpret args & return result code
	return interpret(args);
}