#include <tinyxml.h>

#include "parser.h"
#include "server.h"

int main(int argc, char* argv[])
{
	Server server(new XMLParser("input.xml"), 4);
	server.start();

	return 0;
}
